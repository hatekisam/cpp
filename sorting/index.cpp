#include <iostream>

using namespace std;

int main()
{
    int temp;
    int arr[8] = {12, 3, 4, 1, 5, 6, 28, 69};
    cout << "Unsorted array:" << endl;
    for (int i : arr)
        cout << i << "," ;
    cout << endl;
    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 8; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array:" << endl;
    for (int i : arr)
        cout << i << "," ;
    cout << endl;
    return 0;
}