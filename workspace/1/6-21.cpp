#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    long long X;
    cin >> N >> X;

    string burger = "P";
    for (int i = 0; i < N; ++i) {
        burger = "B" + burger + "P" + burger + "B";
    }

    long long result = 0;
    for (long long i = 0; i < X; ++i) {
        if (burger[i] == 'P') {
            ++result;
        }
    }
    cout << result << endl;
}