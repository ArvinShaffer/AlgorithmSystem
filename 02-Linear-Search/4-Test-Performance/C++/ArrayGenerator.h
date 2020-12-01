#ifndef ARRAYGENERATOR_H
#define ARRAYGENERATOR_H
class ArrayGenerator
{
private:
    ArrayGenerator () {}
public:
    static int* generateOrderedArray(int n) {
        int *arr = new int[n];
        for(int i = 0; i < n; i ++){
            arr[i] = i;
        }
        return arr;
    }
};

#endif // ARRAYGENERATOR_H
