#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=0;
        int a[n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j])
                m++;
                
            }
        }
        if(n>2)
        cout<<n-m<<endl;
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
    
}