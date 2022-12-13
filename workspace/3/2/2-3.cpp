#include <iostream>
using namespace std;

int cnt = 1000;
int func1() {
    return 2020;
}
int func2(int pos) {
    cnt += 1;
    return cnt + pos;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    cout << func1() << endl;
    cout << func2(500) << endl;
    cout << func2(500) << endl;
    return 0;
}