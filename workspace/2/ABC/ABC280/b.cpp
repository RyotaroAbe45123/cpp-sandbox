#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> s(10);
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
    }
    vector<int> a(10);
    for (int i = 0; i < N; ++i) {
        int tmp = s[i];
        for (int j = 0; j < i; ++j) {
            tmp -= a[j];
        }
        a[i] = tmp;
    }
    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            cout << a[i];
        }
        else {
            cout << " " << a[i];
        }
    }
    cout << endl;
}