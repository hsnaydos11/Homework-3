#include "pch.h"
#include "CppUnitTest.h"
#include "..\HuffmanAndHeapsort\Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HuffmanAndHeapsortTest
{
	TEST_CLASS(HuffmanAndHeapsortTest)
	{
	public:
		
		TEST_METHOD(GoodCase)
		{
			char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
			int freq[] = { 5, 9, 12, 13, 16, 45 };

			int size = sizeof(arr) / sizeof(arr[0]);

			HuffmanCodes(arr, freq, size);
		}
		TEST_METHOD(BadCase)
		{
			char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
			int freq[] = { 5, 9, 12, 13, 16, 45 };

			int size = sizeof(arr) / sizeof(arr[0]);

			HuffmanCodes(arr, freq, size);
		}
		TEST_METHOD(UglyCase)
		{
			char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
			int freq[] = { 5, 9, 12, 13, 16, 45 };

			int size = sizeof(arr) / sizeof(arr[0]);

			HuffmanCodes(arr, freq, size);
		}
	};
}
