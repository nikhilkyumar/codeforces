#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      long long n,a,b;
      cin>>n>>a>>b;
      if(a+b+2<=n){
        cout<<"Yes 
";
      }
      else if(a==b&&a==n){
        cout<<"Yes
";
      }else{
        cout<<"No 
";
      }
    }
 
    return 0;
}