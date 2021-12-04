#include<bits/stdc++.h>
using namespace std;
class compleix{
    double re_,im_;
    public:
     compleix(double re , double im): re_(re),im_(im){
         cout<<"ctor :";print();
     }
     compleix(const compleix&c):re_(c.re_),im_(c.im_){
         cout<<"copy constructor :";print();
     }
     ~compleix(){cout<<"dtor :";print();}
     double norm(){
         return sqrt(re_*re_+im_*im_);
     }
     void  print(){
    cout<<"|"<<re_<<"+j"<<im_<<"| ="<<norm()<<endl;
}

};
void display(compleix c_param){
    cout<<"Display :";c_param.print();
}

int main(){
    complex c(4.2,5.3);
    display(c);
    return 0;
}