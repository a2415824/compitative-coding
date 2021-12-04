#include<bits/stdc++.h>
#define ll long long int
#define S ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(x,n) for(int i=x;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    S
    int t;
    cin>>t;
    while (t--)
    {  
        int n;
       ll x=0,y=0,x1,y1,e,s1,s2;
       cin>>n;
       vector<ll>v;
       f(0,n){
            cin>>e;
            v.pb(e);
       } 
       if(n%2==0){
           x1=y1=n/2;
       }
       else{
           x1=n/2;
           y1=(n/2)+1;
       }
       f(0,n){
        if(v[i]%2==0)
        x++;
        else
        y++;
          
       }
       s1=min(x,y1);
       s2=min(y,x1);

       cout<<s1+s2<<"\n";
       

    }
    

}
