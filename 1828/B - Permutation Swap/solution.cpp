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
      vector<int> p;
      for(int i=0;i<n;i++){
        int val;
        cin>>val;
        p.push_back(val);
      }
 
      int k = abs(p[0]-1);
      for (int i = 1; i < n; i++){
        k= __gcd(k,abs(p[i]-(i+1)));
      }
      cout<<k<<endl;
      
    }
 
    return 0;
}