#include <iostream>
using namespace std;

int main() {
    int rows, number = 1;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "\nFloyd's Triangle:\n";

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of rows (odd number): ";
//     cin >> n;

//     int mid = n / 2;

//     // Upper part
//     for(int i = 0; i <= mid; i++) {
//         for(int j = 0; j < mid - i; j++)
//             cout << " ";
//         for(int j = 0; j < 2 * i + 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     // Lower part
//     for(int i = mid - 1; i >= 0; i--) {
//         for(int j = 0; j < mid - i; j++)
//             cout << " ";
//         for(int j = 0; j < 2 * i + 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }

