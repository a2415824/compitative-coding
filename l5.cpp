#include<bits/stdc++.h>
#define ll long long int
#define S ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(x,n) for(int i=x;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    
    int n,m,f;
    int ans1=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
         f =  abs( abs(i-(i+1))-abs(j-(j+1)));
         if(f==1){
               ans1++;
         }
        }
    }
    cout<<ans1;
}