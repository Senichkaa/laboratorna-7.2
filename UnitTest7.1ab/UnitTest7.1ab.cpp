#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.7.1ab\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71ab
{
	TEST_CLASS(UnitTest71ab)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** tArr = new int* [2];
			for (int i = 0; i < 2;) tArr[i++] = new int[2];
			{
				tArr[0][0] = 1;
				tArr[0][1] = 0;
				tArr[1][0] = -1;
				tArr[1][1] = -2;
				Assert::AreEqual(0, tArr[0][1]);

			}
		}
	};
}
