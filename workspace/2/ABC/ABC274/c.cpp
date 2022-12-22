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
    // cout << 0 << endl;
    // for (int i = 0; i < n; ++i) {
    //     int ans = 0;
    //     while (a[i] > 0) {
    //         a[i] /= 2;
    //         ++ans;
    //     }
    //     cout << ans << endl;
    //     cout << ans << endl;
    // }
}