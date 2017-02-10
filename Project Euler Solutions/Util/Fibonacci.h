#pragma once
#include "Fibonacci.h"
class Fibonacci
{

public:
	Fibonacci();

	long getValue() {
		return currValue;
	}

	int getIndex() {
		return index;
	}

	void increment();

private:
	int index;
	long prevValue, currValue;
};

