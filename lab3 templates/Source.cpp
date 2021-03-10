#include <string>
#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
	const int SIZE = 10;


	SimpleVector<int> intTable(SIZE);
	SimpleVector<double> doubleTable(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		intTable[i] = (i * 2);
		doubleTable[i] = (i * 2.14);
	}

	//display values
	cout << "These values are in intTable: " << endl;
	intTable.print();

	cout << "These values are in doubleTable: " << endl;
	doubleTable.print();

	return 0;

}