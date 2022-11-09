#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

constexpr int INF = 1 << 30;

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (auto& xi: x) {
        cin >> xi;
    }
    for (auto& yi: y) {
        cin >> yi;
    }

    int minimum_dist = INF;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int dist = dx * dx + dy * dy;

            minimum_dist = min(minimum_dist, dist);
        }
    }
    cout << minimum_dist << endl;
}