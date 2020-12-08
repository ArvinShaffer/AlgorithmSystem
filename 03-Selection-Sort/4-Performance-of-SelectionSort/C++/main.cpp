#include <iostream>
#include <ctime>
#include <array>
#include "SelectionSort.h"
#include "ArrayGenerator.h"
#include "SortingHelper.h"

using namespace std;

int main()
{
    /*
    array<int, 2> dataSize = {10000, 100000};
    for(int n : dataSize){
        int* arr = ArrayGenerator::generateRandomArray(n, n*2);
        clock_t startTime = clock();
        SelectionSort::sort(arr, n);
        clock_t endTime = clock();
        cout << "Costs time:" << (double)(endTime - startTime) / CLOCKS_PER_SEC << endl;
        delete[] arr;
    }
    */

    array<int, 2> dataSize = {10000, 100000};
    for(int n : dataSize){
        int* arr = ArrayGenerator::generateRandomArray(n, n*2);
        SortingHelper::sortTest("SelectionSort", arr, n);
        delete [] arr;
    }

    return 0;
}
