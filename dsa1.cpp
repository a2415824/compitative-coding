#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,z;
        priority_queue<int>p;
        cin>>n>>z;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p.push(x);
        }
        
        int s,co=0;

        while (p.top()>0)
        {   
            int m=p.top();
            if(z>0) co++;
            z-=m;
            p.pop();
            p.push(m/2);
        }
        if(z>0) cout<<"Evacuate"<<"\n";
        else cout<<co<<"\n";
        
             
     
    }
    
}