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
      int total=0;
      while(n>=10){
        n=n/10;
        total++;
      }
      int count=(9*total)+n;
      cout<<count<<endl;
    }
 
    return 0;
}