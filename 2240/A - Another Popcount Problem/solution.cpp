#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll n, k;
        cin >> n >> k;
        int bits = 0;
        for (int b = 20; b >= 0; b--) {
            ll cost = ((1LL << b) - 1) * k;
            if (cost <= n) {
                bits = b;
                break;
            }
        }
        ll used = ((1LL << bits) - 1) * k;
        ll left = n - used;
        ll extra = min(k, left / (1LL << bits));
 
        cout << bits * k + extra << '
';
    }
 
    return 0;
}