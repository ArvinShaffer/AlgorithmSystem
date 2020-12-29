#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

class InsertionSort
{
private:
    InsertionSort () {}
public:
    template<typename T>
    static void sort(T* arr, int len){
        for(int i = 0; i < len; i++){
            //将arr[i]插入到合适的位置
            T t = arr[i];
            int j;
            for(j = i; j > 0 && t < arr[j - 1]; j--){
                arr[j] = arr[j - 1];
            }
            arr[j] = t;
        }
    }
};

#endif // INSERTIONSORT_H
