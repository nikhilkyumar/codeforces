#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int count1=0;
      int count0=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
          count0++;
        }
        if(s[i]=='1'){
          count1++;
        }
      }
      int n=min(count1,count0);
      if(n%2==0){
        cout<<"NET"<<endl;
      }else{
        cout<<"DA"<<endl;
      }
    }
 
    return 0;
}