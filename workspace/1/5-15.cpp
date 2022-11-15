#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<int>> G(N);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        --u, --v;

        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int> col(N);
    for (auto& coli: col) {
        cin >> coli;
    }

    for (int i = 0; i < Q; ++i) {
        int t, x;
        cin >> t >> x;
        --x;
        cout << col[x] << endl;

        if (t == 1) {
            for (auto v: G[x]) {
                col[v] = col[x];
            }
        }
        else {
            int y;
            cin >> y;
            col[x] = y;
        }
    }
}