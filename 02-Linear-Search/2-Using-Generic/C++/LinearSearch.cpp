#include <iostream>

using namespace std;

#define length(arr) sizeof(arr)/sizeof(arr[0])

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
    int data[] = {24, 18, 12, 9, 16, 66, 32, 4};

    int res1 = LinearSearch::search(data, 16, sizeof(data)/sizeof(data[0]));
    cout << res1 << endl;

    int res2 = LinearSearch::search(data, 999, sizeof(data)/sizeof(data[0]));
    cout << res2 << endl;
    return 0;
}
