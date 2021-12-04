#include<bits/stdc++.h>
using namespace std;

bool check(int a,int b,int c){
        return a+c==2*b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int z=1;z<=t;z++){
        cout<<"Case #"<<z<<": ";
    

    int a[3][3];
    cin>>a[0][0]>>a[0][1]>>a[0][2];
    cin>>a[1][0]>>a[1][1]>>a[1][2];
    cin>>a[2][0]>>a[2][1]>>a[2][2];
    
    int res=check(a[0][0],a[0][1],a[0][2]);
        res+=check(a[2][0],a[2][1],a[2][2]);
        res+=check(a[0][0],a[1][1],a[2][0]);
        res+=check(a[0][2],a[1][2],a[2][2]);

        map<int,int>cn;

        auto add= [&](int x,int y){
            int s=x+y;
            if(s%2)return;
            cn[s/2]++;
        };

        add(a[0][0],a[2][2]);
        add(a[2][0],a[0][2]);
        add(a[1][0],a[1][2]);
        add(a[0][1],a[2][1]);

        int mx=0;
        for(auto i:cn){
            mx=max(mx,i.second);
        }
        cout<<res+mx<<"\n";


    }
    return 0;

}