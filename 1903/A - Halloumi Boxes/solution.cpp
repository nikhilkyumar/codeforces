#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      vector<long long> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        bool sorted=true;
        for(int i=1;i<n;i++){
            if (a[i-1]>a[i]){
                sorted=false;
                break;
            }
        }
        if(sorted||k>1){
            cout<< "YES 
";
        }
        else{
            cout<<"NO 
";
        }
 
 
    }
    
   
    
 
 
 
 
    return 0;
}