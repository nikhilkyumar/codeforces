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
      long long pow2=0;
      long long pow3=0;
      while(n%2==0){
         n=n/2;
         pow2++;
      }
      while(n%3==0){
        n=n/3;
        pow3++;
      }
      if(n==1&&pow3>=pow2){
        long long ans=(pow3-pow2)+pow3;
        cout<<ans<<endl;
      }else{
      cout<<-1<<endl;}
    }
 
    return 0;
}