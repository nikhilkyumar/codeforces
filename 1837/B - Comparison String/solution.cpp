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
      string s;
      cin>>s;
      int cost=1;
      int val=1;
 
      for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
          cost++;
        }else{
          cost=1;
        }
        val=max(val,cost);
      }
 
      cout<<val+1<<endl;
    }
 
    return 0;
}