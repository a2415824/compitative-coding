#include<iostream>
#include<conio.h>
using namespace std;

const int  m=50;
class items{
        int itemcode[m];
        float itemprice[m];
        int count;

        public:
        void CNT(void){count =0;}
        void getitem(void);
        void displaysum(void);
        void remove(void);
        void displayitem(void);
};

void items::getitem(void){
    cout<<"Enter item code :";
    cin>>itemcode[count];

    cout<<"Enter the item cost :";
    cin>>itemprice[count];
    count++;
}
void items::displaysum(void){
    float sum = 0;
    for(int i=0;i<count;i++)
        sum = sum+itemprice[i];
     cout<<"\nTotal value :"<<sum<<"\n";
    
}
void items::remove(void){
    int a;
    cout<<"Enter item code";
    cin>>a;
    for(int i=0;i<count;i++)
     if(itemcode[i]==a)
     itemprice[i]=0;
}
void items::displayitem(void){
    cout<<"\n code price\n";
    for(int i=0;i<count;i++){
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<"\n";
}

int main(){
    items order;
    order.CNT();

    int x;
    do{
        cout<<"\nYou can do the following##*&\n";
        cout<<"Enter the appropriate number \n";
        cout<<"\n1 :Add an item";
        cout<<"\n2 :Display total value";
        cout<<"\n3 :Delete an item";
        cout<<"\n4 :Display all item";
        cout<<"\n5 :Quit";
        cout<<"\nWhat is your option?";
        cin>>x;

        switch (x)
        {
        case 1:
            order.getitem();
            break;
        case 2:order.displaysum();break;
        case 3:order.remove();break;
        case 4:order.displayitem();break;
        case 5:break;    
        
        default:
            cout<<"Error in input; try again @ @^^^^^^^^";
        }
    }while (x!=5);

 return 0;
    
}
