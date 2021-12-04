#include<bits/stdc++.h>
using namespace std;

int Function_Return_By_value(int &x){
    cout<<"x="<<x<<"&x = "<<&x<<endl;
    return (x);
}
int main(){
    int a=10;
    cout<<"a="<<a<<"&a = "<<&a<<endl;

    const int& b=Function_Return_By_value(a);

    cout<<"b="<<b<<"&b ="<<&b<<endl;
    return 0;
}