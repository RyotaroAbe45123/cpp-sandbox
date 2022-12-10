#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> s(11);
    s[0] = 0;
    for (int i = 1; i <= N; ++i) {
        cin >> s[i];
    }
    vector<int> a(10);
    for (int i = 0; i < N; ++i) {
        a[i] = s[i+1] - s[i];
    }
    for (int i = 0; i < N; ++i) {
        if (i == N-1) {
            cout << a[i] << endl;
        }
        else {
            cout << a[i] << ' ';
        }
    }
}