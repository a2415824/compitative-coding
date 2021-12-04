#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
int main(){
    map<int,int>m;
    int s;
    cin>>s;
    f(s){
        int x,b;
        int n=0;
        cin>>x;
        m[x]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<"\n";
        cout<<"returns first number and second times";
    }
    
}