#include<bits/stdc++.h>
#define f(a,n) for(int i=a;i<n;i++)
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m,john_sum=0,jack_sum=0,ans=0;
        cin>>n>>m;
        priority_queue<ll> mx_q;
        priority_queue<ll,vector<ll>,greater<ll>> mn_q;
        f(0,n){
            ll x;
            cin>>x;
            mn_q.push(x);
            john_sum+=x;
        }
        f(0,m){
            ll x;
            cin>>x;
            mx_q.push(x);
            jack_sum+=x;
        }
        while(john_sum<=jack_sum){
            int john_ele=mn_q.top();
            int jack_ele=mx_q.top();
            if(john_ele>=jack_ele){
                break;
            }
            ans++;
            john_sum -=john_ele;
            john_sum +=jack_ele;
            jack_sum -=jack_ele;
            jack_sum +=john_ele;
            mn_q.pop();
            mx_q.pop();
            mn_q.push(jack_ele);
            mx_q.push(john_ele);
        }
        if(jack_sum>=john_sum) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    
}