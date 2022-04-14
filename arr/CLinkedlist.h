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
	 //소멸자는  list해제할때 다 노드가 소멸하기때문에 필요가 없음
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
		 //1.노드생성
		 listTnode<T>* Pnewnode = new listTnode<T>(i_data,nullptr,nullptr); //값을 넣음
		 //2.비어있는지 조건체크
		 if (nullptr == p_headnode)
		 {
			 p_headnode = Pnewnode;
			 p_tailnode = Pnewnode;
		 }
		 else //한개이상 있다.
		 {
			 p_tailnode->p_next = Pnewnode; //마지막노드,PNEW와 연결 NEXT
			 Pnewnode->p_prev = p_tailnode; // PNEW와 마지막노드 연결  PREV
			 p_tailnode = Pnewnode; //tail 새로생성된 노드를 가리킴
		 }
		 this->i_count++;


     }
	 void pushfront(const T& i_data)
	 {
		 listTnode<T>* Pnode = new listTnode<T>(i_data, nullptr, nullptr);
		 listTnode<T>* Pnew = p_headnode;
		 Pnew->p_prev = Pnode;
		 Pnode->p_next = Pnew;
		 p_headnode = Pnode; //헤드노드로 직접바꿔줘야함''
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
	 Clist() //연산자 오버로딩 
	 {
		 this->i_count = 0;
		 this->p_headnode = nullptr;

	 }
	 ~Clist()
	 {
		 listTnode<T>* pnew = p_headnode;

		 while (0 < i_count)// =pnew랑같음 참일때만 동작
		 {
			 listTnode<T>* deletenode = pnew;
			 pnew = pnew->p_next;
			 delete(deletenode);
			 i_count--;
		 }

	 }
 };