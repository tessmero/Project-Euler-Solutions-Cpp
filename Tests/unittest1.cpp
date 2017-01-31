#include "stdafx.h"
#include "CppUnitTest.h"

#include "../Project Euler Solutions/Solver1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Solver1 instance = Solver1();
			int expectedValue = instance.getExpectedTestResult();
			int actualValue = instance.doTest();
			Assert::AreEqual(expectedValue, actualValue, L"Unexpected doTest() result from Solver1", LINE_INFO());
		}

	};
}