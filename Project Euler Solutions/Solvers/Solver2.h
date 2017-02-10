#pragma once
#include "Solver.h"
class Solver2 : public Solver
{

public:
	long doSolution() {
		return getEvenFibSum(4000000);
	}

	long doTest() {
		return getEvenFibSum(89);
	}

	long getExpectedTestResult() {
		return 2 + 8 + 34;
	}

private:
	long getEvenFibSum(long max);
};

