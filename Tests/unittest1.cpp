#include "stdafx.h"
#include "CppUnitTest.h"
#include <boost/filesystem.hpp>
#include <boost/range/iterator_range.hpp>
#include <iostream>

#include "../Project Euler Solutions/Solver1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace boost::filesystem;

namespace Tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			path solverSourceDir("../Project Euler Solutions/");
			Assert::IsTrue(is_directory(solverSourceDir), L"Could not find expected solver source directory" );
			for (auto& entry : boost::make_iterator_range(directory_iterator(solverSourceDir), {}))
				Logger::WriteMessage(entry.path().c_str()); 

			Solver1 instance = Solver1();
			int expectedValue = instance.getExpectedTestResult();
			int actualValue = instance.doTest();
			Assert::AreEqual(expectedValue, actualValue, L"Unexpected doTest() result from Solver1", LINE_INFO());
		}

	};
}