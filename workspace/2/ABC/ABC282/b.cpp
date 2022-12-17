#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    int counter = 0;
    for (int x = 0; x < N-1; ++x) {
        for (int y = x + 1; y < N; ++y) {
            bool check = true;
            for (int i = 0; i < M; ++i) {
                if (S[x][i] != 'o' and S[y][i] != 'o') {
                    check = false;
                }
            }
            if (check) {
                ++counter;
            }
        }
    }
    cout << counter << endl;
}