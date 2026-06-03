#include <bits/stdc++.h>
using namespace std;

int main() {
    int stops;
    cin >> stops;

    int acc = 0, mx = 0;

    for (int i = 0; i < stops; i++) {
        int a, b;
        cin >> a >> b;

        acc -= a;
        acc += b;

        mx = max(mx, acc);
    }

    cout << mx << endl;
    return 0;
}