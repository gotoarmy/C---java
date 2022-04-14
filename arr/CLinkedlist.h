#pragma once
template<typename T>
 struct listTnode
{
	 T data;
	 listTnode<T>* p_next;
	 listTnode<T>* p_prev;
     
	 listTnode(const T& i_data, listTnode* p_next,listTnode* p_prev)
	 {
		 data = i_data;
		 p_next = nullptr;
		 p_prev = nullptr;
	 }
	 //�Ҹ��ڴ�  list�����Ҷ� �� ��尡 �Ҹ��ϱ⶧���� �ʿ䰡 ����
};
 template<typename T>
 class Clist 
 {
 private:
	 listTnode<T>* p_headnode;
	 listTnode<T>* p_tailnode;
	 int i_count;

 public:
	 void pushback(const T& i_data)
	 {
		 //1.������
		 listTnode<T>* Pnewnode = new listTnode<T>(i_data,nullptr,nullptr); //���� ����
		 //2.����ִ��� ����üũ
		 if (nullptr == p_headnode)
		 {
			 p_headnode = Pnewnode;
			 p_tailnode = Pnewnode;
		 }
		 else //�Ѱ��̻� �ִ�.
		 {
			 p_tailnode->p_next = Pnewnode; //���������,PNEW�� ���� NEXT
			 Pnewnode->p_prev = p_tailnode; // PNEW�� ��������� ����  PREV
			 p_tailnode = Pnewnode; //tail ���λ����� ��带 ����Ŵ
		 }
		 this->i_count++;


     }
	 void pushfront(const T& i_data)
	 {
		 listTnode<T>* Pnode = new listTnode<T>(i_data, nullptr, nullptr);
		 listTnode<T>* Pnew = p_headnode;
		 Pnew->p_prev = Pnode;
		 Pnode->p_next = Pnew;
		 p_headnode = Pnode; //������ �����ٲ������''
		 i_count++;
	 }
	 void Print()
	 {
		 listTnode<T>* printp = nullptr;
		 printp = p_headnode;
		 int i = 0;
		 while (i < i_count)
		 {
			 printf("%d ", printp->data);
			 printp = printp->p_next;
			 i++;
		 }
	 }
	 


 public:
	 Clist() //������ �����ε� 
	 {
		 this->i_count = 0;
		 this->p_headnode = nullptr;

	 }
	 ~Clist()
	 {
		 listTnode<T>* pnew = p_headnode;

		 while (0 < i_count)// =pnew������ ���϶��� ����
		 {
			 listTnode<T>* deletenode = pnew;
			 pnew = pnew->p_next;
			 delete(deletenode);
			 i_count--;
		 }

	 }
 };