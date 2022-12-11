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
    long long sum = accumulate(A.begin(), A.end(), 0);
    cout << sum;
}