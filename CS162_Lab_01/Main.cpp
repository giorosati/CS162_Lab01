/*********************************************************************
** Author: Giovanni Rosati
** Date: 2016-01-12
** Description: Main function for CS162_400 Winter 2016

*********************************************************************/
//Main.cpp
#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//user chooses a 2x2 or a 3x3 matrix
	int size = NULL;
	int determinate = NULL;

	while (!(size == 2 || size == 3))
	{
		cout << "Please enter a  2  to create a 2x2 matrix, or a  3  to create a 3x3 matrix: " << endl;
		cin >> size;
	}

	//create an array depending on size
	if (size == 2)
	{
		int table[2][2];
		readMatrix(size, *table);
		determinate = calculateDeterminate(size, *table);

		cout << "Here is the array created:" << endl;
		cout << endl;
		cout << table[0][0] << " " << table[0][1] << endl;
		cout << table[1][0] << " " << table[1][1] << endl;
		cout << endl;
		cout << "The determinate of this matrix is: " << determinate << endl;
		cout << endl;
	}
	else
	{
		int table[3][3];
		readMatrix(size, *table);
		determinate = calculateDeterminate(size, *table);

		cout << "Here is the array created:" << endl;
		cout << endl;
		cout << table[0][0] << " " << table[0][1] << " " << table[0][2] << endl;
		cout << table[1][0] << " " << table[1][1] << " " << table[1][2] << endl;
		cout << table[2][0] << " " << table[2][1] << " " << table[2][2] << endl;
		cout << endl;
		cout << "The determinate of this matrix is: " << determinate << endl;
		cout << endl;
	}

	//used to test in Visual Studio
	//system("pause");

	return 0;
}