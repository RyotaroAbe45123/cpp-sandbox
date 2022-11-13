#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N;) {
        int j = i;
        while (j < N && S[j] == S[i]) {
            ++j;
        }

        cout << S[i] << j - i << endl;

        i = j;
    }
}