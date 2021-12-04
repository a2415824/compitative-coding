#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
#define pb push_back
int main(){
    int a;
    int b;
     vector<int>v;
    
    cout<<"enter the number";
    cin>>a;
    f(a){
        cin>>b;
        v.pb(b);
    }
    cout<<"your entres are :";
    for(auto x:v){
        
        cout<<x;
    }
    
    return 0;

}