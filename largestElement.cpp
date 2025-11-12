#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 7, 5};
    int largest = arr[0];
    int i = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    while(i < arr[size]) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
        i++;
    }
    cout << largest;
}