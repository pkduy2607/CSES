#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n;
bool mark[N];

int main() {
    cin >> n;
    for(int i = 1; i < n; i++) {
        int x;
        cin >> x;
        mark[x] = true;
    }

    for(int i = 1; i <= n; i++) {
        if(!mark[i]) {
            cout << i;
            return 0;
        }
    }
}
