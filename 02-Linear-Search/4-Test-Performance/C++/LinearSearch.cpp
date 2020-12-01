#include <iostream>
#include "ArrayGenerator.h"
#include <array>
#include <ctime>

using namespace std;

class LinearSearch
{
private:
    LinearSearch() {}
public:
    template<typename T>
    static int search(T *data, T target, int len){
        for(int i = 0; i < len; i++){
            if(data[i] == target){
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    array<int, 2> dataSize = {1000000, 10000000};
    for(int n : dataSize){
        int *data = ArrayGenerator::generateOrderedArray(n);
        clock_t startTime = clock();
        for(int k = 0; k < 100; k ++){
            LinearSearch::search(data, n, n);
        }
        clock_t endTime = clock();
        cout << "n = " << n << " , 100 runs : " << (double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
        delete[] data;
    }
    return 0;
}
