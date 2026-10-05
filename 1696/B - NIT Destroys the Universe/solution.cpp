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
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      
      int total_zero=0;
      for(int i=0;i<n;i++){
        if(a[i]==0){
          total_zero++;
        }
      }
      int l=0;
      int r =n-1;
      while(a[l]==0){
        l++;
      }
      while(a[r]==0){
        r--;
      }
      bool exist=false;
      for (int i = l; i <r; i++)
      {
        if(a[i]==0){
          exist=true;
        }
      }
 
      if(total_zero==n){
        cout<<0<<endl;
      }else if(exist){
          cout<<2<<endl;
      }else{
        cout<<1<<endl;
      }
      
    }
 
    return 0;
}