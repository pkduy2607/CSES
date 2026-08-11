#include <bits/stdc++.h>
using namespace std;

int ntests;
long long x, y;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        cin >> y >> x;
        long long z = max(y, x);
        if(z % 2 == 0)
            cout << z * z - abs(z - y) - abs(1 - x) << '\n';
        else
            cout << z * z - abs(1 - y) - abs(z - x) << '\n';
    }

    return 0;
}
