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
      int count=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
          count++;
        }
    }
    int num=0;
    if(count%2==1){
      cout<<-1<<endl;
    }
    else if(count==0){
      cout<<1<<endl;
    }
    else{
      int half=count/2;
      int res=0;
      for(int i=0;i<n;i++){
        if(res==half){
          num=i;
          break;
        }
        if(a[i]==2){
          res++;
        }
 
      }
       cout<<num<<endl;
    }
   
 
 
 
    }  
 
    return 0;
}