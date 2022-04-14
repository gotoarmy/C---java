
#include <stdio.h>
#include "vararr.h"


int main()
{
	arr a1;
	initiate(&a1);
	//난수넣기
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		int ranNum = rand() %100 +1;
		pushback(&a1, ranNum);
	}
	//난수를 넣은 가변배열을 출력한다.
	for (int i = 0; i < 10; i++) {
		printf("%d ", a1._iptr[i]);
	}
	printf(" \n");
	bubblesort(&a1,a1.Count);
	// 정렬된 가변배열을 출력한다
	for (int i = 0; i < 10; i++) {
		printf("%d ", a1._iptr[i]);
	}

	Release(&a1);

	
	
}

