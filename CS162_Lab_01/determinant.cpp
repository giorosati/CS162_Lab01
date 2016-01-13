#include <iostream>
#include "determinant.hpp"

int calculateDeterminate(int size, int table[])
{
	int determinate = NULL;

	if (size == 2)
	{
		determinate = ( *(table+0) * *(table+3)) - (*(table+1) * *(table+2));
	}

	else
	{
		determinate =
			(*(table+0) * ((*(table+4) * *(table + 8)) - (*(table + 5) * *(table + 7)))) -
			(*(table + 1) * ((*(table + 3) * *(table + 8)) - (*(table + 5) * *(table + 6)))) +
			(*(table + 2) * ((*(table + 3) * *(table + 7)) - (*(table + 4) * *(table + 6))));
	}

	return determinate;
}