#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      long long x,t;
      cin>>x>>t;
      long long jump;
      int op=t%4;
      if(op==0){
        jump=0;
      }else if(op==1){
        jump=-t;
      }else if(op==2){
        jump=1;
      }else if(op==3){
        jump=t+1;
      }
      long long ans;
      if(x%2==0){
        ans=x+jump;
      }else{
        ans=x-jump;
      }
      cout<<ans<<endl;
    }
 
    return 0;
}