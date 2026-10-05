#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      vector<int> a(7);
      for(int i=0;i<=6;i++){
        cin>>a[i];
      }
      sort(a.begin(),a.end());
      int count=0;
      int sum=0;
      for(int i=0;i<a.size();i++){
        if(count<6){
          sum=sum+a[i]*-1;
          count++;
        }else{
          sum+=a[i];
        }
      }
      cout<<sum<<"
";
    }
 
    return 0;
}