#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int N;
    long long T;
    cin >> N >> T;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    const long long rem = T % accumulate(A.begin(), A.end(), 0ll);
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        if (sum + A[i] > rem) {
            cout << i + 1 << ' ' << rem - sum << endl;
            return 0;
        }
        sum += A[i];
    }
    return 0;
}