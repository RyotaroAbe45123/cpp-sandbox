#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag[10];
    for (int i = 0; i < 10; i++) {
        flag[i] = true;
    }
    for (int i = 0; i < 9; i++) {
        flag[(int)(s[i] - '0')] = false;
    }
    for (int i = 0; i < 10; i++) {
        if (flag[i]) {
            cout << i << endl;
        }
    }
    return 0;
}