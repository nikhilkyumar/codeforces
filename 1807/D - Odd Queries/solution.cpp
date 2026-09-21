#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      long long n,q;
      cin>>n>>q;
      vector<long long> a(n);
      long long sum=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
      }
      vector<long long> prefixsum(n+1,0);
      for(int i=1;i<=n;i++){
        prefixsum[i]=prefixsum[i-1]+a[i-1];
      }
      while(q--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long rem= prefixsum[r]-prefixsum[l-1];
        long long add=(r-l+1)*k;
        long long newsum=sum-rem+add;
        if(newsum%2==1){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
      }
    }
 
    return 0;
}