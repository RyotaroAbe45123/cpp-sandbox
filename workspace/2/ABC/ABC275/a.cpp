#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }
    int argmax = 0;
    for (int i = 0; i < N; ++i) {
        if (H[i] > H[argmax]) {
            argmax = i;
        }
    }
    cout << argmax + 1 << endl;
}