#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> Q >> S;
    vector<int> CS(N + 1, 0);

    for (int i = 1; i < N; ++i) {
        CS[i + 1] = CS[i] + (S.substr(i - 1, 2) == "AC");
    }

    for (int q = 0; q < Q; ++q) {
        int l, r;
        cin >> l >> r;
        --l;
        cout << CS[r] - CS[l + 1] << endl;
    }
}