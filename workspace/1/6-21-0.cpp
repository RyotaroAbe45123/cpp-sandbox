#include <iostream>
using namespace std;

int rec(int N) {
    if (N == 0){
        return 0;
    }
    return N + rec(N - 1);
}

int main() {
    int N;
    cin >> N;
    int result;
    result = rec(N);
    cout << result << endl;
}