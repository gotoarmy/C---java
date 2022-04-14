#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <time.h>

typedef struct arr {
	int Count;
	int Maxcount;
	int* _iptr;

}arr;
void initiate(arr* _pst);
void Release(arr* _pst);
void pushback(arr* _pst, int i);
void bubblesort(arr* _pst,int arraynum);
