#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    for (int i = 1; i <= N; ++i) {
        int x;
        cin >> x;
        if (x == X) {
            cout << i << endl;
        }
    }
}