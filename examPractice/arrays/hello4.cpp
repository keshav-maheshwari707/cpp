#include<iostream>
using namespace std;
int main() {
    int arr[10] = {95, 77, 3, 9, 57, 32, 43, 27, 88, 100};
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    cout << sum;
    return 0;
}