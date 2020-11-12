#include <iostream>

using namespace std;

class LinearSearch
{
public:
    static int search(int *data, int target){
        int len = sizeof(data);
        for(int i = 0; i < len; i++){
            if(data[i] == target){
                return i;
            }
        }
        return -1;
    }
private:
};

int main()
{
    int data[] = {24, 18, 12, 9, 16, 66, 32, 4};

    int res1 = LinearSearch::search(data, 16);
    cout << res1 << endl;

    int res2 = LinearSearch::search(data, 999);
    cout << res2 << endl;
    return 0;
}
