#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for (int i = 0; i < h; ++i) {
        cin >> c[i];
    }
    for (int i = 0; i < w; ++i) {
        int ans = 0;
        for (int j = 0; j < h; ++j) {
            if (c[j][i] == '#') {
                ++ans;
            }
        }
        cout << ans << (i == (w-1) ? '\n' : ' ');
    }
}