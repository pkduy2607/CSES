#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    if(n == 2 || n == 3)
        cout << "NO SOLUTION";
    else {
        for(int i = n - 1; i >= 1; i -= 2)
            cout << i << ' ';
        for(int i = n; i >= 1; i -= 2)
            cout << i << ' ';
    }

    return 0;
}
