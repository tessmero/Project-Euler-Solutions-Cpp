#pragma once
class Solver
{
public:
	virtual long doSolution() = 0;

	virtual long doTest() = 0;

	virtual long getExpectedTestResult() = 0;
};

