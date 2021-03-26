#include "pch.h"
#include "CppUnitTest.h"
#include "../ActivityProblem/Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ActivityProblemTest
{
	TEST_CLASS(ActivityProblemTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[] = { 1, 3, 0, 5, 8, 5 };
			int f[] = { 2, 4, 6, 7, 9, 9 };
			int n = sizeof(s) / sizeof(s[0]);
			
			printMaxActivities(s, f, n);

		}
		TEST_METHOD(TestMethod2)
		{
			int s[] = { 1, 3, 0, 5, 8, 5 };
			int f[] = { 2, 4, 6, 7, 9, 9 };
			int n = sizeof(s) / sizeof(s[0]);
			printMaxActivities(s, f, n);
		}
		TEST_METHOD(TestMethod3)
		{
			int s[] = { 1, 3, 0, 5, 8, 5 };
			int f[] = { 2, 4, 6, 7, 9, 9 };
			int n = sizeof(s) / sizeof(s[0]);
			printMaxActivities(s, f, n);
		}
	};
}
