#include<bits/stdc++.h>
using namespace std;
class sma{
    int a;
    int b;
    public:
     void setvalue(){
         a=20;
         b=40;
     }
     friend float mean(sma s);
};

float mean(sma s){
    return float(s.a+s.b)/2.0;
}

int main(){
    sma x;
    x.setvalue();
    cout<<mean(x);
}