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
	Pnode->P_nextnode = nullptr; //초기화 안하면 접근에러뜸.
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
			//널을찾아라;
			if (pnew->P_nextnode)
			{
				pnew = pnew->P_nextnode;
			}
			else
			{
				//찾았다
				pnew->P_nextnode = Pnode;
				//연결
				Pnode->P_prevnode = pnew;
				//이전값 연결
			}
		}
	}
	list->icount++;
	list->ptailnode = Pnode; //마지막 주소를 얻기위함

}

void Release(Linkedlist* list)
{
	Node* pnew = list->pHeadnode;

	while (nullptr != pnew->P_nextnode)// =pnew랑같음 참일때만 동작
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
	Pnode->P_nextnode = nullptr; //초기화 안하면 접근에러뜸.
	Pnode->ivalue = data;

	Node* pnew = list->pHeadnode;
	pnew->P_prevnode = Pnode;
	Pnode->P_nextnode = pnew;
	list->pHeadnode = Pnode; //헤드노드로 직접바꿔줘야함''
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

