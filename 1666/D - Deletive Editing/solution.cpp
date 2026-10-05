#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      string s;
      string t;
      cin>>s;
      cin>>t;
      vector<int>count(26,0);
      for(int i=0;i<t.size();i++){
       count[t[i]-'A']++;
      }
      for(int i=s.size()-1;i>=0;i--){
        if(count[s[i]-'A']>0){
            count[s[i]-'A']--;
        }else{
            s[i]='.';
        }
      }
      string final="";
      for(int i=0;i<s.size();i++){
        if(s[i]!='.'){
            final+=s[i];
        }
      }
      if(final==t){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
 
    }
 
    return 0;
}