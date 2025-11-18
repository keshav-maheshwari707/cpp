#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vc;
    cout << "enter elements: ";
    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        vc.push_back(x);
    }
    for(int i : vc) {
        cout << i << endl;
    }
    return 0;
}