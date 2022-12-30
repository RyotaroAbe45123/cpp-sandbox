#include <iostream>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if ((r1 - l2 > 0) && (r1 > l2)) cout << r1 - l2 << endl;
    else cout << 0 << endl;
}