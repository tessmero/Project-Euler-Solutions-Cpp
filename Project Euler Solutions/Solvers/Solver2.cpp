#include "stdafx.h"
#include "Solver2.h"
#include "../Util/Fibonacci.cpp"

long Solver2::getEvenFibSum(long max)
{
	long result = 0;

	long val;
	Fibonacci fib;

	while ((val = fib.getValue()) <= max) {
		if (val % 2 == 0) {
			result += val;
		}
		fib.increment();
	}

	return result;
}