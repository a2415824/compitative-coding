#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,fin=0;
        cin>>n;
        for(int c=1;c<=n;c++){
            for(int b=c;b<=n;b+=c){
                if(b%c==0){
                    for(int a=c;a<=n;a+=b){
                        if(a%b==c){
                            fin++;
                        }
                    }
                }
            }
        }
        cout<<fin<<"\n";
    }
    return 0;
    
}