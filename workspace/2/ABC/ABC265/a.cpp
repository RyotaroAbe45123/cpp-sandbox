#include <iostream>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    if (x * 3 > y) {
        cout << ((n/3) * y) + ((n%3) * x) << endl;
    }
    else {
        cout << (n * x) << endl;
    }
}