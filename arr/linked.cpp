#include "linked.h"

void sort(Node* inode,Linkedlist* list, void(*sortfunc)(int, int))
{
	sortfunc(inode->ivalue, list->icount);
}

void innitiate(Linkedlist* plist)
{
	plist->icount = 0;
	plist->pHeadnode = nullptr;
}


void Pushback(Linkedlist* list, int data)
{
	Node* Pnode = (Node*)malloc(sizeof(Node));
	Pnode->P_nextnode = nullptr; //�ʱ�ȭ ���ϸ� ���ٿ�����.
	Pnode->ivalue = data;

	if (list->pHeadnode == nullptr)
	{
		list->pHeadnode = Pnode;
		list->ptailnode = Pnode;
	}
	else
	{
		Node* pnew = list->pHeadnode;
		for (int i = 0; i < list->icount; i++)
		{
			//����ã�ƶ�;
			if (pnew->P_nextnode)
			{
				pnew = pnew->P_nextnode;
			}
			else
			{
				//ã�Ҵ�
				pnew->P_nextnode = Pnode;
				//����
				Pnode->P_prevnode = pnew;
				//������ ����
			}
		}
	}
	list->icount++;
	list->ptailnode = Pnode; //������ �ּҸ� �������

}

void Release(Linkedlist* list)
{
	Node* pnew = list->pHeadnode;

	while (nullptr != pnew->P_nextnode)// =pnew������ ���϶��� ����
	{
		Node* deletenode = pnew;
		pnew = pnew->P_nextnode;
		free(deletenode);		
	}
	free(pnew);
}

void Pushfront(Linkedlist* list, int data)
{
	Node* Pnode = (Node*)malloc(sizeof(Node));
	Pnode->P_nextnode = nullptr; //�ʱ�ȭ ���ϸ� ���ٿ�����.
	Pnode->ivalue = data;

	Node* pnew = list->pHeadnode;
	pnew->P_prevnode = Pnode;
	Pnode->P_nextnode = pnew;
	list->pHeadnode = Pnode; //������ �����ٲ������''
	list->icount++;

}
void Print(Linkedlist* list)
{
	Node* printp = nullptr;
	printp = list->pHeadnode;
	int i = 0;
	while (i < list->icount)
	{
		printf("%d ", printp->ivalue);
		printp = printp->P_nextnode;
		i++;
	}
}

