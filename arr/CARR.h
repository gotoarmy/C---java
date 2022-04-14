#pragma once
#include <stdio.h>
template<typename T>
class CARR
{
private:
	int m_icount;
	int m_imaxccount;
	T* pType;
public:
	void pushback(const T& idata);
	void bubblesort();
	void Relocate();
	void printall();
	int& operator[](int idx);
public:
	CARR();
	~CARR();
	class iterator;
	iterator begin();   //���ͷ����� �Լ��� ���Ͱ����迭����

	class iterator
	{
	 private:
		int i_index;
		T* pitr; //���ͷ����ʹ� �Լ�
    public:
		iterator()
			:i_index(1)
			, pitr(nullptr)   //������ �̴ϼȶ�����
		{

		}
		iterator(int index, T* pty)
			:i_index(index)
			, pitr(pty)
		{
				
	    }			
	};
};
template<typename T>
void CARR<T>::pushback(const T& idata)
{
	if (this->m_icount == m_imaxccount)
	{
		Relocate();
	}
	pType[m_icount++] = idata;
}
template<typename T>
void CARR<T>::bubblesort()
{
	if (m_icount <= 1)
	{
		return;
	}
	for (int j = m_icount - 1; 0 < j; j--)
	{
		for (int i = 0; i < m_icount - 1; i++)
		{
			if (pType[i] > pType[i + 1])
			{
				int temp = pType[i];
				pType[i] = pType[i + 1];
				pType[i + 1] = temp;
			}

		}
	}


}
template<typename T>
void CARR<T>::Relocate()
{
	//1.���������� â�����

	int* newptr = new int[2 * m_imaxccount];
	if (newptr != nullptr)
	{
		//2.������ ����
		for (int i = 0; i < m_icount; i++)
		{
			newptr[i] = pType[i];
		}
		//3. �����Ҵ� ����
		delete[]pType;
		//4.���� �����ͷ� ����Ŵ
		pType = newptr;
		//5. max ī���� ����
		m_imaxccount = 2 * m_imaxccount;
	}
}
template<typename T>
void CARR<T>::printall()
{
	for (int i = 0; i < m_icount; i++) {
		printf("%d ", pType[i]);
	}
}

template<typename T>
int& CARR<T>::operator[](int idx)
{
	return pType[idx];
}

template<typename T>
CARR<T>::CARR()
{
	m_icount = 0;
	m_imaxccount = 2;
	pType = new int[2];
}
template<typename T>
CARR<T>::~CARR()
{
	delete[](pType);
}

template<typename T>
typename CARR<T>::iterator CARR<T>::begin()
{
	return iterator(0,pType);
}

