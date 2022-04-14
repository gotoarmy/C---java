#pragma once
#include <iostream>
typedef struct Node{
	int  ivalue = 0;
	Node* P_nextnode = nullptr;
	Node* P_prevnode = nullptr;

}Node;
typedef struct _tagLinkedlist
{
	int icount;
	Node* pHeadnode;
	Node* ptailnode;

}Linkedlist;
void sort(Node* i_node, void(*sortfunc)(int*, int));
void innitiate(Linkedlist* plist);
void Pushback(Linkedlist* list, int data);
void Release(Linkedlist* list);
void Pushfront(Linkedlist* list, int data);
void Print(Linkedlist* list);
