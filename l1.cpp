#include<bits/stdc++.h>
//#define ll long long int
//#define se second
//#define f first
//#define 
#define S ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(x,n) for(int i=x;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,p;
        cin>>n>>x;

        unordered_map<int,int>mp;
        unordered_map<int,int> pre;

        f(0,n){
            cin>>p;
            mp[p]++;
            pre[p]=1;
        }
        if(n==1){
            cout<<1<<" "<<endl;
            continue;
        }
        int ans=0;
        int cha=0;

        for(auto it:mp){
            if(it.second == n){
                ans=n;
                break;
            }
            if(it.second>=ans){
                ans=it.second;
            }
        }
        if(x==0){
            cout<<ans<<" "<<cha<<endl;
            continue;
        }
        for(auto it:mp){
            if(pre[(it.first)^x]==1){
                if(it.second+mp[(it.first)^x]>ans){
                    ans=it.second+mp[(it.first)^x];
                    cha=min(it.second,mp[(it.first)]);
                }
            }
            else if(it.second+mp[(it.first)^x]==ans){
                if(min(it.second,mp[(it.first)^x])<cha){
                    cha=min(it.second,mp[(it.first)^x]);
                }
            }
        }
        cout<<ans<<" "<<cha<<endl;
    }
    
}