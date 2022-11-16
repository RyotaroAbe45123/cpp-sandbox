#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto& Ai: A) {
        cin >> Ai;
    }

    vector<int> S(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        S[i + 1] = S[i] + A[i];
    }
    cout << S.back() << endl;
}