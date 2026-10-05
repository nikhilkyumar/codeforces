#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      long long op=0;
      long long freq=0;
      unordered_map<long long , long long>mp;
      for(int i=0;i<n;i++){
        mp[arr[i]]++;
      }
      for(auto i:mp){
        freq=max(freq,i.second);
      }
      while(freq<n){
        op++;
        if(freq*2<=n){
          op+=freq;
          freq=freq*2;
        }else{
          op+= n-freq;
          freq=n;
        }
      }
      cout<<op<<endl;
      
    }
 
    return 0;
}