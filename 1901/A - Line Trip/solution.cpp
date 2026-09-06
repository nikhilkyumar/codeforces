#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n; int x;
        cin>>n>>x;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    long long instretch=a[0];
    long long endstretch = 2*(x-a[n-1]);
    long long maximum=0;
    for(int i=0;i+1<n;i++){
        maximum=max(maximum,a[i+1]-a[i]);
        }
 
    long long ans=max({instretch,endstretch,maximum});
    cout << ans << "
";
    }
 
    return 0;
}