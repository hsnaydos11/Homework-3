#include "pch.h"
#include "CppUnitTest.h"
#include "..\HuffmanAndHeapsort\HeapHeader.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HeapSortTest
{
	TEST_CLASS(HeapSortTest)
	{
	public:
		
		TEST_METHOD(GoodCase)
		{
			int arr[] = { 12, 11, 13, 5, 6, 7 };
			int n = sizeof(arr) / sizeof(arr[0]);

			heapSort(arr, n);

			printf("Sorted array is \n");
			printArray(arr, n);
			
		}
		TEST_METHOD(BadCase) 
		{
			int arr[] = { 12, 11, 13, 5, 6, 7 };
			int n = sizeof(arr) / sizeof(arr[0]);

			heapSort(arr, n);

			printf("Sorted array is \n");
			printArray(arr, n);

		}
		TEST_METHOD(UglyCase)
		{
			int arr[] = { 12, 11, 13, 5, 6, 7 };
			int n = sizeof(arr) / sizeof(arr[0]);

			heapSort(arr, n);

			printf("Sorted array is \n");
			printArray(arr, n);
		}
	};
}
