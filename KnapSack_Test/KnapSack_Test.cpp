#include "pch.h"
#include "CppUnitTest.h"
#include "..\2-KnapSackProblem\Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KnapSackTest
{
	TEST_CLASS(KnapSackTest)
	{
	public:
		
		TEST_METHOD(GoodCase)
		{
			int val[] = { 60, 100, 120 };
			int wt[] = { 10, 20, 30 };
			int W = 50;
			int n = sizeof(val) / sizeof(val[0]);

			int result = knapSack(W, wt, val, n);

			Assert::AreEqual(result, 220);		
		}
		TEST_METHOD(BadCase)
		{
			int val[] = { 60, 100, 120 };
			int wt[] = { 10, 20, 30 };
			int W = 50;
			int n = sizeof(val) / sizeof(val[0]);

			int result = knapSack(W, wt, val, n);

			Assert::AreNotEqual(result, 120);
		}
		TEST_METHOD(UglyCase)
		{
			int val[] = { 60, 100, 120 };
			int wt[] = { 10, 20, 30 };
			int W = 50;
			int n = sizeof(val) / sizeof(val[0]);

			int result = knapSack(W, wt, val, n);

			Assert::AreSame(result, 320);
		}
	};
}
