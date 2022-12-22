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
    for (int i = 0; i < n; ++i) {
        int ans = 0;
        while (c[i] > 0) {
            c[i] /= 2;
            ++ans;
        }
        cout << ans << endl;
    }
}