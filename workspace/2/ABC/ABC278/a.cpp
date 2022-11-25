#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < N; ++j) {
            A[j] = A[j + 1];
        }
        A[N] = 0;
    }
    for (int i = 0; i < N; ++i) {
        cout << A[i] << (i == N -1 ? "\n" : " ");
    }
}