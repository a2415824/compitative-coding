#include<bits/stdc++.h>
using namespace std;
void swap(int&,int&);//call by reference//

int main(){
      int a =10,b=15;
      cout<<"a="<<a<<"and b="<<b<<"to swap "<<endl;
      swap(a,b);
      cout<<"a="<<a<<"and ="<<b<<"after swap";

}
void swap(int &x,int &y){
    int t;
    t=x;
    x=y;
    y=t;

}