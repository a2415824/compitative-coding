#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,d=0;
        string s[n];
        string t[n];
        
        
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int j=0;j<n;j++){
            cin>>t[j];

        }
        for(int k=0;k<n;k++){
            if((s[k]=="1"&&t[k]=="0")||(s[k]=="0"&&t[k]=="1")||(s[k]=="1"&&t[k]=="1")){
                d++;
            }
        }
        cout<<d/2<<endl;
    }
    return 0;
    
}