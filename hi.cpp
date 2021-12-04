#include<bits/stdc++.h>
//#define S ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define pb push_back
#define f(x,n) for(int i=x;i<n;i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   
        int n,k,l;
        cin>>n>>k>>l;

        int s[n];
        int maxi=INT_MIN;
        int ind_maxi=n-1;
        f(0,n){
            cin>>s[i];
        }
        int flag=1;
        f(0,n-1){
            if(s[i]>=s[ind_maxi]){
                flag=0;
            }
        }
        if(flag)
        cout<<"Yes";
        else
           {
               flag=1;
               s[ind_maxi]=s[ind_maxi]+(l-1)*k;
            f(0,n){
                   if(s[i]>=s[ind_maxi]){
                       flag=0;
                   }
               }
               if(flag)
               cout<<"Yes";
               else
               cout<<"N0";
           }
         cout<<endl;

    }
    
    return 0;
}