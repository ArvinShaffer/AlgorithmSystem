#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

class InsertionSort
{
private:
    InsertionSort () {}
    template <typename T>
    static void swap(T* arr, int i, int j){
        T t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
public:
    template <typename T>
    static void sort(T* arr, int len){
        for(int i = 0; i < len; i++){
            //将arr[i]插入到合适的位置
//            for(int j = i; j > 0; j --){
//                if(arr[j] < arr[j - 1]){
//                    swap(arr, j, j - 1);
//                }
//                else break;
//            }
            for(int j = i; j > 0 && arr[j] < arr[j - 1]; j --){
                swap(arr, j, j - 1);
            }
        }
    }
};



#endif // INSERTIONSORT_H
