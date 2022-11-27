#include <iostream>
using namespace std;

bool is_in_24_hours(int h, int m) {
    if (h < 0) {
        return false;
    }
    else if (h > 23) {
        return false;
    }
    else if (m < 0) {
        return false;
    }
    else if (m > 59) {
        return false;
    }
    else {
        return true;
    }
}

bool misjuded(int h, int m) {
    int a, b, c, d;
    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;
    int ac, bd;
    ac = a * 10 + c;
    bd = b * 10 + d;
    return is_in_24_hours(ac, bd);
}

int main() {
    int H, M;
    cin >> H >> M;
    while (!misjuded(H, M)) {
        ++M;
        if (M == 60) {
            H = H + 1;
            M = 0;
        }
        if (H == 24) {
            H = 0;
        }
    }
    cout << H << " " << M << endl;
}