#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double ans = double(b) / double(a);
    cout << fixed << setprecision(3) << ans << endl;
}