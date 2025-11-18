#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    int largest = arr[0];
    for(int i = 0; i < 5; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }
    cout << largest << " is the largest element.";
    cout << endl;
    int smallest = arr[0];
    for(int i = 0; i < 5; i++) {
        if(smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    cout << smallest << " is the smallest element.";
    return 0;
}