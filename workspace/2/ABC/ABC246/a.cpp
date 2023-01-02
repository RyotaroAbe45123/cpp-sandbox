#include <iostream>
using namespace std;

int main() {
    int xy[4][4];
    for (int i = 0; i < 3; i++) {
        cin >> xy[i][0] >> xy[i][1];
    }
    int x, y;
    if ((xy[0][0] != xy[0][1]) && (xy[0][0] != xy[0][2])) x = xy[0][0];
    else if ((xy[0][1] != xy[0][0]) && (xy[0][1] != xy[0][2])) x = xy[0][1];
    else x = xy[0][2];
    if ((xy[0][0] != xy[1][0]) && (xy[0][0] != xy[2][0])) y = xy[0][0];
    else if ((xy[1][0] != xy[0][0]) && (xy[1][0] != xy[2][0])) y = xy[1][0];
    else y = xy[2][0];
    cout << y << endl;
    cout << x << " " << y << endl;
}