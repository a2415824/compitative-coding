#include<bits/stdc++.h>
//#define ll long long int
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
        int n,x,s=0,d,m=0,an;
        vector<int>v;
        cin>>n;

        f(0,n){
            cin>>x;
            v.pb(x);
        }
        
        f(0,n){
            rotate(v.begin(),v.begin(),v.end());
            while(n--){
                      d=(v[n]+n)%2;
                      s=s+d;
                      m=s;
                      
            }
            an=max(s,m);
            
        }
        cout<<an<<"\n";


    }


    return 0;

}