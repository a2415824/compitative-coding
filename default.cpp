#include<bits/stdc++.h>
using namespace std;
int identityFunction(int a=10){
    return (a);
}
int main(){
    int x=5,y;
    y = identityFunction(x);
    cout<<"y = "<<y<<endl;

    y = identityFunction();
    cout<<"Y = "<<y<<endl;
}