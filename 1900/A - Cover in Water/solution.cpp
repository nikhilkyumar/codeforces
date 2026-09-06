#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        bool consthree= false;
        int totalcell=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'&&i+1<s.size()&&s[i+1]=='.'&&i+2<s.size()&&s[i+2]=='.'){
                consthree= true;
                break;
 
            }
            if(s[i]=='.'){
                totalcell=totalcell+1;
            }
           
        }
 
        if(consthree==true){
            cout<<2<<endl;
        }
        else{
            cout<< totalcell<<endl;
        }
 
    }
 
    
 
    return 0;
}