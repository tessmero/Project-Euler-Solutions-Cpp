#include "stdafx.h"
#include "Fibonacci.h"

Fibonacci::Fibonacci()
{
	index = 0;
	prevValue = 1;
	currValue = 1;
}

void Fibonacci::increment()
{
	index++;
	long temp = currValue;
	currValue += prevValue;
	prevValue = temp;
}