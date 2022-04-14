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
 //   }  //컨트롤 + (쉬프트 + /)
	//for (int i = 5; i < 10; i++)
	//{
	//	Pushfront(&list, i);
	//}
	//Print(&list);
	//Release(&list);
	//// 노드 생성 푸쉬 백
	//CARR arr;
	//srand(time(nullptr));
	//for (int i = 0; i < 10; i++)
	//{
	//	int ranNum = rand() % 100 + 1;
	//	arr.pushback(ranNum);
	//}
	////난수를 넣은 가변배열을 출력한다.
	//arr[0] = 1;   //좌항은 pint[idx]가됨 거기에 1을 집어넣음 이제 1번인덱스값은 1로바뀌어야함
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
	////난수를 넣은 리스트를 출력한다.
	CARR<int> myvecter;
	myvecter.pushback(3);
	myvecter.pushback(2);
	myvecter.pushback(1);
	myvecter.printall();
	myvecter.bubblesort();
	myvecter.printall();
	CARR<int>::iterator iter;          //이너클레스 이터소환
	iter = myvecter.begin();


	return 0;
}
