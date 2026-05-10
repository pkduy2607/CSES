#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n, a[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i < n; i++)
        cin >> a[i];

    sort(a + 1, a + n);

    for(int i = 1; i <= n; i++) {
        if(i != a[i]) {
            cout << i;
            break;
        }
    }

    return 0;
}
