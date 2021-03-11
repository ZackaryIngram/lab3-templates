#pragma once
#include "SimpleVector.h"
#include <iostream>


template <class T>
class SortableVector : public SimpleVector<T>
{
private:

public:
	Sort();
};

template <class T>
int SortableVector<T>::Sort()
{
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = T();
	}
}

