#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    int counter = 0;
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        G[u-1].push_back(v);
        G[v-1].push_back(u);
    }
    cout << counter << endl;
    return 0;
}