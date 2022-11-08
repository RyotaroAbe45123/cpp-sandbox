#include <iostream>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    bool exist = false;
    for (int i = a; i <= b; ++i) {
        if (i % k == 0) {
            exist = true;
        }
    }
    if (exist) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}