#include <iostream>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;
    int h = k / 60;
    int m = k % 60;
    string hh, mm;
    if (h == 0) hh = "21";
    else hh = "22";
    if (m < 10) mm = "0" + to_string(m);
    else mm = to_string(m);
    cout << hh + ":" + mm << endl;
}