#pragma once
#include "Solver.h"
class Solver1 : public Solver
{

public:
	long doSolution() {
		return getSumOfMultiples(100);
	}

	long doTest() {
		return getSumOfMultiples(10);
	}

	long getExpectedTestResult() {
		return 23;
	}

private:
	long getSumOfMultiples(long ceiling);
};

