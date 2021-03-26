// HuffmanAndHeapsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include "HeapHeader.h"
using namespace std;

int main()
{

    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    int arr1[] = { 12, 11, 13, 5, 6, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);    
    int n1 = sizeof(arr) / sizeof(arr[0]);

    HuffmanCodes(arr, freq, size);
    heapSort(arr1, n1);

    cout << "\nSorted array is \n";
    printArray(arr1, n1);
    return 0;
}

