#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    int a[n],pr[q];

    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>pr[i];
        cout<<"\n";
    }
    int sum=0;
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
             sum *= (pr[i]-a[j]);
        }
        if(sum>0) cout<<"POSITIVE"<<"\n";
        else if(sum<0) cout<<"NEGATIVE"<<"\n";
        else cout<<"0"<<"\n";
    }

   return 0;
}