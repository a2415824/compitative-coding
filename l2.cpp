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
    while(t--){
    
    int n,x,a,z;
    int b;
    int c=0;
    int res;
    map<int,int>m1;
    
    
    cin>>n,x;
    f(0,n){
           cin>>a;
           m1[a]++;
    }
    
    for(auto s:m1){
        cout<<s.first<<" "<<s.second<<"\n";
    }
    
    }

}