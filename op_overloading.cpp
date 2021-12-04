#include<bits/stdc++.h>
using namespace std;
typedef struct _String{
    char *str;
}String;
int main(){
    String fn,ln,na;
    fn.str=strdup(" PRAVEEN");
    ln.str=strdup(" R");
    na.str=(char *) malloc(strlen(fn.str)+strlen(ln.str)+1);
    strcpy(na.str,fn.str);
    strcat(na.str,ln.str);

    cout<<"First name :"<<fn.str<<endl;
    cout<<"Last name :"<<ln.str<<endl;
    cout<<"Full name :"<<na.str<<endl;

    return 0;
}