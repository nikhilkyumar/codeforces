#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
      int a,b,xk,yk,xq,yq;
      cin>>a>>b>>xk>>yk>>xq>>yq;
      int dx[4]={1,1,-1,-1};
      int dy[4]={1,-1,1,-1};
      set<pair<int,int>> kingpair,queenpair;
 
      for (int i = 0; i < 4; i++)
      {
       kingpair.insert({xk+dx[i]*a,yk+dy[i]*b});
       kingpair.insert({xk+dx[i]*b,yk+dy[i]*a});
 
       queenpair.insert({xq+dx[i]*a,yq+dy[i]*b});
       queenpair.insert({xq+dx[i]*b,yq+dy[i]*a});
       
 
      }
      int ans=0;
      for(auto pos:kingpair){
        if(queenpair.find(pos)!=queenpair.end()){
          ans++;
        }
      }
      cout<<ans<<endl;
 
    }
 
    return 0;
}