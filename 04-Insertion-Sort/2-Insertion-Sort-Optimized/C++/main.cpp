#include <iostream>
#include <ctime>
#include <array>
#include "SelectionSort.h"
#include "ArrayGenerator.h"
#include "SortingHelper.h"

using namespace std;

int main()
{
    array<int, 2> dataSize = {10000, 100000};
    for(int n : dataSize){
        int* arr = ArrayGenerator::generateRandomArray(n, n*2);
        int arr2[n];
        copy(arr, arr + n, arr2);
        SortingHelper::sortTest("InsertionSort", arr, n);
        SortingHelper::sortTest("InsertionSort2", arr2, n);
        delete [] arr;
    }

    return 0;
}
