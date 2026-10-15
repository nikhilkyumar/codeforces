#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      long long n;
      long long x;
      cin>>n>>x;
      vector<long long >a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
 
      vector<pair<long long , long long>>range(n);
      for(int i=0;i<n;i++){
        range[i]={a[i]-x,a[i]+x};
      }
      long long left=range[0].first;
      long long right=range[0].second;
      long long ans=0;
      for(int i=0;i<n;i++){
 
        left=max(left,range[i].first);
        right=min(right,range[i].second);
        if(left>right){
 
          left=range[i].first;
          right=range[i].second;
          ans++;
        }
        
 
      }
      cout<<ans<<endl;
    }
 
    return 0;
}