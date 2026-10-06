#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int op=__INT_MAX__;
      int count=0;
      for(int i=0;i<n;i++){
        if(a[i]%k==0){
          op=0;
        }
        if(a[i]%2==0){
          count++;
        }
        op=min(op,k-(a[i]%k));
      }
      if(k==4){
        if(count>=2){
          op=0;        
        }else if(count==1){
          op=min(op,1);
          }
          else if(count==0){
            op=min(op,2);
          }
      }
      
      cout<<op<<endl;
    }
 
    return 0;
}