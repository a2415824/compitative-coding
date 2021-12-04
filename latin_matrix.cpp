#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {  
        int n,k=0,r=0,co=0,a=1;
        bool f=false;
        map<int,int> rw;
        map<int,int>col;
        cin>>n;

        int m[n][n];
        vector<int>v;

        for(int i=0;i<n;i++){
             rw.clear();
            for(int j=0;j<n;j++){
                cin>>m[i][j];
                if(i==j) k+=m[i][j];
                rw[m[i][j]]++;
            }
            for(auto x:rw){
              if(x.second>1) f=true;
             
            }
            if(f) r++;
        }
        for(int i=0;i<n;i++){
            col.clear();
            for(int j=0;j<n;j++){
                col[m[j][i]]++;
            }
            for(auto x:col){
                if(x.second>1) f=true;
            }
            if(f) co++;
        }

        cout<<"case #"<<a<<":"<<k<<" "<<r<<" "<<co<<endl;
        a++;
    }
    
}