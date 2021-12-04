#include<iostream>
#include<conio.h>

using namespace std;

class item{
    int number;
    float cost;
    public:
     void getdata(void);

     void putdata(void){
         cout<<"number = "<<number<<"\n";
         cout<<"cost = "<<cost<<"\n";
     }
};

void item ::getdata(void){
    int a,b;
    cout<<"Enter the number: "<<"\n";
    cin>>a;
    number =a;
    cout<<"Enter the cost: "<<"\n";
    cin>>b;
    cost = b;
}
int main(){
    item x;
    cout<<"\n object x"<<"\n";

    x.getdata();
    x.putdata();
    
    item y;
    cout<<"\n object y"<<"\n";
    
    y.getdata();
    y.putdata();

}