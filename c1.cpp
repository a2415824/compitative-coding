#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int g=0;
    cin>>t;
    while (t--)
    {
        int h;
        int a,b,c,d,s;
        d=a%b;
        s=b%c;
        for( a=0;a<h;a++){
            for( b=0;b<h;b++){
                for( c=0;c<h;c++){
                    if(d==c&&s==0){
                        g++;
                    }
                    
                }
            }
        }
        cout<<g<<endl;
    }
    
}

