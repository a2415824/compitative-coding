#include<bits/stdc++.h>
#define S ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int Sum(int n,int i){
    int temp=0;
    while (n>0)
    {
        temp=temp+n%i;
        n=n/i;
    }
    return temp;
    
}

int minb(int n,int l,int r){
       int ni=INT_MAX,base=0;
       for(int i=r;i>=1;i--){
           
           if(r>=n && n%i==0)
           return i;
           
           int k=Sum(n,i);
           if(k<=ni){
               ni=k;
               base=i;
           }
           

       }
       return base;

}
int main(){
    S
    int t;
    cin>>t;
    while (t--)
    { 
        int n,l,r;
        cin>>n>>l>>r;
      cout<<minb(n,l,r)<<"\n";  
    }


    return  0;
}
