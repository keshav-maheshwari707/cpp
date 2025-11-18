#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}