#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    constexpr int M = 101;
    vector<int> exist(M, 0);

    for (int i = 0; i < N; ++i) {
        int d;
        cin >> d;
        exist[d] = 1;
    }

    int result = 0;
    for (auto x : exist) {
        result += x;
    }
    cout << result << endl;
}