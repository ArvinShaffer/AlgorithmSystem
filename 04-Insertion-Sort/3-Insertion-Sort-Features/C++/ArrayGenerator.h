#ifndef ARRAYGENERATOR_H
#define ARRAYGENERATOR_H
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

class ArrayGenerator
{
private:
    ArrayGenerator() {}
public:
    static int* generateOrderedArray(int n) {
        int *arr = new int[n];
        for(int i = 0; i < n; i ++){
            arr[i] = i;
        }
        return arr;
    }
    static int* generateRandomArray(int n, int bound){
        int* arr = new int[n];
        uniform_int_distribution<int> u(0, bound);
        default_random_engine e(time(0));
        for(int i = 0; i < n; i ++){
            arr[i] = u(e);
        }
        return arr;
    }

};

#endif // ARRAYGENERATOR_H
