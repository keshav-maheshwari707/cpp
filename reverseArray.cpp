#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // cout << arr;
    for(int i : arr) {
        cout << i << " ";
    }
}