#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // Original total time
        long long total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i + 1]);
        }
 
        long long answer = total;
 
        // Remove first element
        answer = min(answer, total - abs(a[0] - a[1]));
 
        // Remove last element
        answer = min(answer, total - abs(a[n - 2] - a[n - 1]));
 
        // Remove one middle element
        for (int i = 1; i + 1 < n; i++) {
            long long cur = total;
            cur -= abs(a[i - 1] - a[i]);
            cur -= abs(a[i] - a[i + 1]);
            cur += abs(a[i - 1] - a[i + 1]);
            answer = min(answer, cur);
        }
 
        cout << answer << '
';
    }
 
    return 0;
}