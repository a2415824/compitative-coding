#include<bits/stdc++.h>
#define FIRE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long  int 
using namespace std;


int main(){
    FIRE
    int t;
    cin>>t;
    while(t--){
        int p,a,b,c,x,y;
        int ans;
        cin>>p>>a>>b>>c>>x>>y;
        ans=min((x*a+b),(y*a+c));
        ans=p/ans;
        cout<<ans<<endl;
    }
    
}