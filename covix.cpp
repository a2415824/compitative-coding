#include<bits/stdc++.h>
using namespace std;
int ansf(int a,int b,int c,int d,int x){
    int cv,cx,ans=-1;
    int z=0;
    vector<int>v;
    
    int st=x;
    for(int i=1;i<=st;i++){
        cx=a+(i-1)*b;
        v.push_back(cx);
        st=st-cx;
        cv=c+(i-1)*d;
        v.push_back(cv);
        st=st-cv;
    }
    
    sort(v.begin(),v.end());

    for(int j=0;j<v.size();j++){
        if(z<x){
            z= z+v[j];
            
            ans++;
        }
    }
    cout<<ans<<endl;
    return ans,a,b,c,d;
    
    
    
}
int arrf(int p,int q,int r,int s,int t,int m,int ans,int a,int b,int c,int d,int x){
    int a1,b1,c1,d1;
    
    a1=(a+ans*t)%m+p;
    b1=(b+ans*t)%m+q;
    c1=(c+ans*t)%m+r;
    d1=(a+ans*t)%m+s;

    
    
    ansf(a1,b1,c1,d1,x);

}
int main(){

    int a,b,c,d,x,i,y;
    int p,q,r,s,t,m;
    cin>>i;
    cin>>x>>a>>b>>c>>d;
    cin>>p>>q>>r>>s>>t>>m;
    int g;
    int a2,b2,c2,d2;
    y=i-1;
    
    
    g = ansf(a,b,c,d,x);
    while(y--){
    arrf(p,q,r,s,t,m,g,a,b,c,d,x);
    }
    
    return 0;

}