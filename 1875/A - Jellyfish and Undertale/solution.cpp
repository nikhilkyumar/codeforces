#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long> nums(n);
    long long sum=b;
    for(int i=0;i<n;i++){
      cin>>nums[i];
      sum += min(a-1,nums[i]);
    }
 
    cout<<sum<<"
";
 
 
  }
  return 0;
}