#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H), t(H);
    for (auto &nx: s) {
        cin >> nx;
    }
    for (auto &nx: t) {
        cin >> nx;
    }
    vector<string> Ts(W), Tt(W);
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            Ts[j].push_back(s[i][j]);
            Tt[j].push_back(t[i][j]);
        }
    }
    sort(Ts.begin(), Ts.end());
    sort(Tt.begin(), Tt.end());

    if (Ts == Tt) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}