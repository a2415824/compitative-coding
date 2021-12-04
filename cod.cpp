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
        int n,k,a,z;
        cin>>n>>k;
        map<int,int>m1;
        map<int,int>m2;

        f(0,n){
              cin>>a;
              m1[a]++;
        }
        for(auto x:m1){
            cout<<x.first<<x.second<<"\n";
        }
        
    }
    

}