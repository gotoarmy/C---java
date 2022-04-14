#include "vararr.h"


void Relocate(arr* _pst)
{
	//1.지역변수에 창고생성
	
	int* newptr = (int*)malloc(sizeof(int) * 2 * (_pst->Maxcount));
	if (newptr != NULL) 
	{
		//2.데이터 이전
		for (int i = 0; i < _pst->Count; i++)
		{
			newptr[i] = _pst->_iptr[i];
		}
		//3. 이전할당 해제
		free(_pst->_iptr);
		//4.이전 포인터로 가리킴
		_pst->_iptr = newptr;
		//5. max 카운터 조정
		_pst->Maxcount = (sizeof(int) * 2 * (_pst->Maxcount)) / 4;
	}
}

void initiate(arr* _pst)
{
	_pst->Count = 0;
	_pst->Maxcount = (sizeof(int) * 2)/4;
	_pst->_iptr = (int*)malloc(sizeof(int)*2);
}

void Release(arr* _pst)
{
	free(_pst->_iptr);
}

void pushback(arr* _pst, int i)
{
	if (_pst->Count == _pst->Maxcount)
	{
		Relocate(_pst);
	}
	_pst->_iptr[_pst->Count++] = i;
}
void bubblesort(arr* _pst,int arraynum)
{
	if (_pst->Count <= 1)
	{
		return;
	}
	for (int j = arraynum - 1; 0 < j; j--)
	{
		for (int i = 0; i < arraynum - 1; i++)
		{
			if (_pst->_iptr[i] > _pst->_iptr[i + 1])
			{
				int temp = _pst->_iptr[i];
				_pst->_iptr[i] = _pst->_iptr[i + 1];
				_pst->_iptr[i + 1] = temp;
			}
			
		}
	}
	
}


