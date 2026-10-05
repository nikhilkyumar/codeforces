#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      unordered_map<int,int> m;
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          int val;
          cin>>val;
          m[val]++;
        }
      }
       bool fact=true;
      if(n==1){
        fact=false;
      }
     
      for(auto i:m){
        if(i.second>n*(n-1)){
          fact=false;
          break;
        }
 
      }
      if(fact){
        cout<<"YES"<<endl;
      }else cout<<"NO"<<endl;
 
    }
 
    return 0;
}