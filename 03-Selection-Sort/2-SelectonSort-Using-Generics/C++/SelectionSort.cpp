#include <iostream>

using namespace std;

class SelectionSort
{
private:
    SelectionSort() {}
    template<typename T>
    static void swap(T* arr, int i, int j){
        T t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
public:
    template<typename T>
    static void sort(T* arr, int len){
        for(int i = 0; i < len; i ++){
            // 选择 arr[i...n)中的最小值的索引
            int minIndex = i;
            for(int j = i; j < len; j ++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr, i, minIndex);
        }
    }
};

int main()
{
    int arr[] = {1, 4, 2, 3, 6, 5};
    SelectionSort::sort(arr, sizeof(arr)/sizeof(arr[0]));
    for(int e: arr){
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
