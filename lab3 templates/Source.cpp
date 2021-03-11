#include <string>
#include <iostream>
#include "SimpleVector.h"
#include "SearchVector.h"
#include "SortableVector.h"
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


	SearchableVector<int> iTable(SIZE);
	SearchableVector<double> dTable(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		iTable[i] = (i * 2);
		dTable[i] = (i * 2.14);
	}

	//display values
	cout << endl;
	cout << "Now printing Searchable Vector output: " << endl;
	cout << "These values are in intTable: " << endl;
	iTable.print();

	cout << "These values are in doubleTable: " << endl;
	dTable.print();




	int result;
	int userNum;
	
	cout << endl;
	cout << "Pick a number between 1-10 " << endl;
	cin >> userNum;

	result = iTable.findItem(userNum);

	if (result == -1)
	{
		cout << "Number wasnt found " << endl;
	}
	else
	{
		cout << userNum << " was found at subscript " << result << endl;
	}

	return 0;
}