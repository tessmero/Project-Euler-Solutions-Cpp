#include "stdafx.h"
#include "Solver1.h"

long Solver1::getSumOfMultiples(long ceiling) 
{
	long result = 0;
	for (long i = 1; i < ceiling; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			result += i;
		}
	}
	return result;
}