#include <iostream>
#include "CLinkedlist.h"
#include "CARR.h"
#include <time.h>

int main()
{
	//Linkedlist list;
	//innitiate(&list);
	//for (int i = 0; i < 5; i++)
	//{
	//	Pushback(&list, i);
	//	
 //   }  //��Ʈ�� + (����Ʈ + /)
	//for (int i = 5; i < 10; i++)
	//{
	//	Pushfront(&list, i);
	//}
	//Print(&list);
	//Release(&list);
	//// ��� ���� Ǫ�� ��
	//CARR arr;
	//srand(time(nullptr));
	//for (int i = 0; i < 10; i++)
	//{
	//	int ranNum = rand() % 100 + 1;
	//	arr.pushback(ranNum);
	//}
	////������ ���� �����迭�� ����Ѵ�.
	//arr[0] = 1;   //������ pint[idx]���� �ű⿡ 1�� ������� ���� 1���ε������� 1�ιٲ�����
	//arr.printall();
	//printf(" \n");
	Clist<int> list;
	srand(time(nullptr));
	for (int i = 0; i < 5; i++)
	{
		int ranNum = rand() % 100 + 1;
		list.pushback(ranNum);
	}
	for (int i = 0; i < 5; i++)
	{
		int ranNum = rand() % 100 + 1;
		list.pushfront(ranNum);
	}
	list.Print();
	////������ ���� ����Ʈ�� ����Ѵ�.
	CARR<int> myvecter;
	myvecter.pushback(3);
	myvecter.pushback(2);
	myvecter.pushback(1);
	myvecter.printall();
	myvecter.bubblesort();
	myvecter.printall();
	CARR<int>::iterator iter;          //�̳�Ŭ���� ���ͼ�ȯ
	iter = myvecter.begin();


	return 0;
}
