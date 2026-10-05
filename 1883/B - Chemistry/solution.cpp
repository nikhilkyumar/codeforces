#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      long long n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      vector<int> freqofchar(26,0);
      for(int i=0;i<n;i++){
        freqofchar[s[i]-'a']++;
      }
      int odd=0;
    for(int i=0;i<26;i++){
      odd += freqofchar[i]%2;
 
    }
 
    if(odd>k+1) cout<<"NO 
";
    else cout<< "YES 
";
 
    }
 
    return 0;
}