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
      long long a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int total=0;
      for(int i=0;i<n-1;i++){
        if(a[i]%2==a[i+1]%2){
          total++;
        }
      }
      cout<<total<<endl;
 
    }
 
    return 0;
}