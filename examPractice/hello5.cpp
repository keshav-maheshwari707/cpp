#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "enter a number: ";
    cin >> number;
    int remainder;
    int sum = 0;
    while(number > 0) {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    cout << sum;
}