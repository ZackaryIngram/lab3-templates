#pragma once
#include "SimpleVector.h"


template <class T>
class SearchableVector : public SimpleVector<T>
{
private:


public:
	SearchableVector(int s) : SimpleVector<T>(s){}
	SearchableVector(SearchableVector& obj) : SimpleVector<T>(obj) {};
	SearchableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj){}
	//int findItem(T z[], T first, T last, T search);
	int findItem(T item);
	//int binarySearch(T array[], T first, T last, T search);
};

//template <class T>
//SearchableVector<T>::SearchableVector(SearchableVector& obj) : SimpleVector<T>(obj){}

//Binary search
template <class T>
int SearchableVector<T>::findItem(T item)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->operator[](i) == item)
		{
			return i;
		}
		else if (this->operator[](i) > item)
		{
			return item / 2 + 1;
		}
		else if (this->operator[](i) < item)
		{
			return item / 2 - 1;
		}
	}

	return -1;
}

//template <class T>
//int SearchableVector<T>::binarySearch(T array[], T first, T last, T search)
//{
//	if (first <= last)
//	{
//		int mid = (first + last) / 2;
//		if (array[mid] == search)
//		{
//			return mid;
//		}
//		else if (array[mid] > search)
//		{
//			return binarySearch(array, mid - 1, last, search);
//		}
//		else if (array[mid] > search)
//		{
//			return binarySearch(array, mid + 1, last, search);
//		}
//		return -1;
//	}
//}

//template <class T>
//int SearchableVector<T>::findItem(T z[], T first, T last, T search)
//{
//	int mid;
//	if (last >= first)
//	{
//		mid = (first + last) / 2;
//
//		if (z[mid] == search)
//		{
//			return mid + 1;
//		}
//		else if (z[mid] < search)
//		{
//			return findItem(z, mid + 1, last, search);
//		}
//		else
//		{
//			return findItem(z, first, mid - 1, search);
//		}
//
//	}
//
//	return -1;
//}