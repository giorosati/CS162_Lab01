#include <iostream>
#include "readMatrix.hpp"

using std::cout;
using std::cin;
using std::endl;

void readMatrix(int size, int table[])
{
	int max = size * size;
	cout << "Please enter " << max << " integers to populate the martix." << endl;
	cout << "Seperate each value with a space, values will fill each row from left to right, then advace to the next row..." << endl;
	cout << "Press enter when done. " << endl;
	for (int count = 0; count < max; count++)
		cin >> *(table + count);
}