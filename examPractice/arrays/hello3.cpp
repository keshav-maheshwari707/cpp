#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vc = {1, 2, 3, 4, 5};
    for(int i : vc) {
        cout << i << endl;
    }
    return 0;
}