#include <iostream>
using namespace std;

const int mod = 998244353;

int main() {
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    long long x, y, answer;
    x = ((a % mod) * (b % mod)) % mod;
    x = (x * (c % mod)) % mod;
    y = ((d % mod) * (e % mod)) % mod;
    y = (y * (f % mod)) % mod;
    answer = (x + mod - y) % mod;
    cout << answer << endl;
    return 0;
}