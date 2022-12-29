#include <iostream>
using namespace std;

bool cnt(int a, int b, int c, int d, int e) {
    int ans = 1;
    if (a == b) ans++;
    if (a == c) ans++;
    if (a == d) ans++;
    if (a == e) ans++;
    if (ans != 2 && ans != 3) return false;
    else return true;
}
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int ans = 1;
    if (cnt(a, b, c, d, e) && cnt(b, a, c, d, e) && cnt(c, b, a, d, e) && cnt(d, b, c, a, e) && cnt(e, b, c, d, a)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}