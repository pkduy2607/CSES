#include <bits/stdc++.h>
using namespace std;

long long n;
vector<long long> res;

int main() {
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
    res.push_back(n);

    for(long long i : res)
        cout << i << ' ';

    return 0;
}
