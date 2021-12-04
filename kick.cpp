#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,d,c,m;
        cin>>n>>d>>c>>m;
        string s;
        bool in=true;
        int da;
        int ca=0;
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='C') ca++;
            else da++;
        }
        if(da==0){
            cout<<"no"<<endl;
        }else{
            for(int k=0;k<n;k++){
                if(s[k]=='C'){
                    c--;
                    if(!c){
                        if(s[k+1]=='c'){
                            in = false;
                        }
                    }
                }
                else{
                    da--;
                    ca+=m;
                    if(!da){
                        in = false;
                    }
                }
            }
            if(in) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
}