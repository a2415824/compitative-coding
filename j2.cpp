#include<bits/stdc++.h>
using namespace std;

class employ{
    char name[30];
    float age;
    public:
     void getdata(void);
     void putdata(void);
};
void employ::getdata(void){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}
void employ::putdata(void){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;

}
const int s = 3;

int main(){
    employ manager[3];
    for(int i=0;i<s;i++){
        cout<<"\nDetails of manager"<<i+1<<"\n";
        manager[i].getdata();
    }
    for(int i=0;i<s;i++){
        cout<<"\nManager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}