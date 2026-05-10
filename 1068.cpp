#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> res;
    int n;
    cin >> n;
    while(n != 1) {
        res.push_back(n);
        if(n % 2 == 0)
            n /= 2;
        else {
            n *= 3;
            n++;
        }
    }
    res.push_back(1);

    for(int i : res)
        cout << i << ' ';

    return 0;
}
