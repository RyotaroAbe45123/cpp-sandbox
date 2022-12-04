#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    for (int i = 0; i < H; ++i) {
        cin >> s[i];
    }
    int counter = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (s[i][j] == '#') {
                ++counter;
            }
        }
    }
    cout << counter << endl;
}