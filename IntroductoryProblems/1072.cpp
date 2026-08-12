#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cout << (long long)i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << '\n';

    return 0;
}
