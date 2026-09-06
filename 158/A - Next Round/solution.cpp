#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;  
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    int threshold = scores[k - 1];
    int count = 0;
    for (int score : scores) {
        if (score > 0 && score >= threshold) {
            count++;
        }
    }
    cout << count << "
";
    
 
    return 0;
}