#include<bits/stdc++.h>
using namespace std;
union Data{
    int i_data;
    char c_data[4];

};
int main(){
    Data d;
    d.i_data=257;
    for(int i=3;i>=0;i--)
    cout<<(int)d.c_data[i]<<" ";
    cout<<endl;
    cout<<d.i_data;
    return 0;

}