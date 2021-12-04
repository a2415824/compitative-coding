#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos){
    return (n|(1<<pos));
}
int clearbit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
int updatebit(int n,int pos,int val){
    int mask = ~(1<<pos);
    n = n &mask;
    return (n|(val<<pos));
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<getbit(a,b)<<endl;
    cout<<setbit(a,b)<<endl;
    cout<<clearbit(a,b)<<endl;
    cout<<updatebit(a,b,1)<<endl;
   return 0;
}