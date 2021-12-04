#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,ans=0,an=0;
        cin>>n;
        
        string s,t;
        cin>>s>>t;
        
        
        for(int i=0;i<n;i++){
            if((s[i]=='1'&&t[i]=='0')||(s[i]=='0'&&t[i]=='1')){
              ans++;
            }
            if((s[i]=='1'&&t[i]=='1')){
                an++;
            }
        }
        if(an=ans){
            cout<<an<<endl;

        }
        if(an==0){
            cout<<"0"<<endl;

        }if(ans>an){
            cout<<ans<<endl;
        }
        
    }
    return 0;
    
}