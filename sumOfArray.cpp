#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < arr[size]; i++) {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}