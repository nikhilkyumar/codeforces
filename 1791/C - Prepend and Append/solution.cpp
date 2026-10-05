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
      string s;
      cin>>s;
 
      int start=0;
      int end=n-1;
      while(start<end&&s[start]!=s[end]){
        start++;
        end--;
      }
      cout<<end-start+1<<endl;
    }
 
    return 0;
}