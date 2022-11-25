#include <iostream>
using namespace std;

bool is_in_24_hours(int h, int m) {
    return (0 <= h <= 23 && 0 <= m <= 59);
}

bool misjuded(int h, int m) {
    int a, b, c, d;
    a, b = h / 10, h % 10;
    c, d = m / 10, m % 10;
    int ac, bd;
    ac = a * 10 + c;
    bd = b * 10 + d;
    return is_in_24_hours(ac, bd);
}

int main() {
    int H, M;
    cin >> H >> M;
    while (!misjuded(H, M)) {
        M += 1;
        if (M == 60) {
            H, M = H + 1, 0;
        }
        if (H == 24) {
            H = 0;
        }
    }
    cout << H << " " << M << endl;
}