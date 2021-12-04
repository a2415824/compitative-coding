#include<bits/stdc++.h>
using namespace std;

class c_2;
class c_1{
    int val1;
    public:
     void indata(int a){val1 = a;}
     void display(void){cout<<val1<<"\n";}
     friend void exchange(c_1 &,c_2 &);
};

class c_2{
    int val2;
    public:
     void indata(int a){val2 = a;}
     void dispaly(void){cout<<val2<<"\n";}
     friend void exchange(c_1 &,c_2 &);
};

void exchange(c_1 &x,c_2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c_1 c1;
    c_2 c2;
    c1.indata(5);
    c2.indata(6);

    cout<<"values before swap"<<"\n";
    c1.display();
    c2.dispaly();

    exchange(c1,c2);
    c1.display();
    c2.dispaly();
    return 0;
}