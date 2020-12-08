#ifndef SORTINGHELPER_H
#define SORTINGHELPER_H

#include <iostream>
#include <string>
#include <ctime>
#include "SelectionSort.h"

using namespace std;

class SortingHelper
{
private:
    SortingHelper( ) { }
public:
    template <typename T>
    static bool isSorted(T arr[], int n){
        for(int i = 1; i < n; i ++){
            if(arr[i-1] > arr[i]){
                return false;
            }
        }
        return true;
    }

    template <typename T>
    static void sortTest(const string& sortname, T arr[], int n){
        clock_t startTime = clock();
        if(sortname.compare("SelectionSort") == 0){
            SelectionSort::sort(arr, n);
        }
        clock_t endTime = clock();

        double costTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;
        if(!SortingHelper::isSorted(arr, n)){
            throw runtime_error(sortname + " Failed");
        }
        cout << sortname << ", n = " << n << " : " << costTime << " s" << endl;
    }

};


#endif // SORTINGHELPER_H
