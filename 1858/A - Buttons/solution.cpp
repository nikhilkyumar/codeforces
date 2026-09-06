#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int a=arr[0];
        int b=arr[1];
        int c=arr[2];
        if(a>b){
             cout<<"First
";}
 
        else if(b>a){
         cout<<"Second 
";}
 
        else if(a==b){
            if(c%2==0) cout<<"Second  
";
            else{
                cout<<"First 
";
            }
        }
 
    }
 
    return 0;
}