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
      vector<long long> a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a.begin(),a.end());
      long long min=a[0];
      long long max=a[n-1];
      if(max==min){
        cout<<"NO 
";
            }
      else{
        cout<<"YES 
";
        cout<<max<<" ";
        for(int i=0;i<n-1;i++){
          cout<<a[i]<<" ";
        }
        cout<<endl;
      }      
    }
 
    return 0;
}