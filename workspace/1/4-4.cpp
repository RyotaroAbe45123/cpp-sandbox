#include <iostream>
using namespace std;

int bit_count(int N) {
    int sum_digit = 0;
    while (N > 0) {
        sum_digit += N % 2;
        N /= 2;
    }
    return sum_digit;
}

int main() {
    int N;
    cin >> N;
    int counter = bit_count(N);
    cout << counter << endl;
}