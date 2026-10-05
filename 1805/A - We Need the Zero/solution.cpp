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
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      int totalxor=0;
      for(int i=0;i<n;i++){
        totalxor^=a[i];
      }
      if(n%2==1){
        cout<<totalxor<<endl;
      }else{
 
        if(totalxor==0){
          cout<<totalxor<<endl;
        }
        else{
          cout<<-1<<endl;
        }
      }
      
    }
 
    return 0;
}