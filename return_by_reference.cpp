#include<bits/stdc++.h>
using namespace std;

int& Function_Return_by_ref(int &x){
    cout<<"x=  "<<x<<"&x = "<<&x<<endl;
    return (x);
}
int main(){
    int a=10;
    cout<<"a = "<<a<<"&a = "<<&a<<endl;
    const int& b = Function_Return_by_ref(a);
    cout<<"b = "<<b<<"&b = "<<&b<<endl;
    return 0;
}
