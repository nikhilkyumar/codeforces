#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      vector<long long>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      map<long long , long long >mp;
      for(int i=0;i<n;i++){
        mp[a[i]]++;
      }
      bool fact=true;
      for(auto i:mp){
        if(i.second==1){
          fact=false;
          break;
        }
      }
      if(!fact){
        cout<<-1<<endl;
        continue;
      }
      vector<long long>ans(n);
      for(int i=0;i<n;i++){
        ans[i]=i+1;
      }
      long long r=0, l=0;
      while(r<n){
        if(a[l]==a[r]){
          r++;
        }else{
          rotate(ans.begin()+l,ans.begin()+l+1,ans.begin()+r);
          l=r;
 
        }
      }
      rotate(ans.begin()+l,ans.begin()+l+1,ans.begin()+r);
      for(auto i:ans){
        cout<<i<<" ";
      }
      cout<<endl;
    }
 
    return 0;
}