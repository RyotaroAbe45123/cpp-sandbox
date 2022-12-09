#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> s(N);
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
    }
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            a[i] = s[i];
        }
        else {
            a[i] = s[i] - a[i-1];
        }
    }
    for (int i = 0; i < N; ++i) {
        cout << a[i] << " "
    }
    cout << endl;
}