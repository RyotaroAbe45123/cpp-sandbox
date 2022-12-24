#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(2 * n + 1, 0);
    for (int i = 0; i < n; ++i) {
        b[2 * i + 1] = b[a[i]-1] + 1;
        b[2 * i + 2] = b[a[i]-1] + 1;
    }
    for (int i = 0; i < 2 * n + 1; ++i) {
        cout << b[i] << endl;
    }
}