#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t;
    cin>>t;
    while(t--){
      long long n,k,b,s;
      cin>>n>>k>>b>>s;
      long long min_s=k*b;
      long long max_s=(k*b)+n*(k-1);
      if(s>max_s||s<min_s){
        cout<<-1<<endl;
      }else{
        vector<long long >ans(n,0);
        ans[0]=min_s;
        long long sum=s-min_s;
        int i=0;
        while(sum!=0){
          long long add=min(sum,k-1);
          ans[i]+=add;
          sum-=add;
          i++;
        }
        for(int i=0;i<n;i++){
          cout<<ans[i]<<" ";
        }
        cout<<endl;
      }
    }
 
    return 0;
}