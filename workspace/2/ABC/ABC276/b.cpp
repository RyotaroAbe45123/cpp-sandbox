#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> S(N);
    for (int i = 1; i <= M; ++i) {
        int a, b;
        cin >> a >> b;
        S[a-1].push_back(b);
        S[b-1].push_back(a);
    }
    for (int i = 0; i < N; ++i) {
        sort(begin(S[i]), end(S[i]));
        cout << S[i].size();
        for (int s: S[i]) {
            cout << ' ' << s;
        }
        cout << endl;
    }
    return 0;
}