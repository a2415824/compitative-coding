#include<bits/stdc++.h>
using namespace std;
typedef struct _String{
    char *str;
}String;
String operator+(const String& s1,const String& s2){String s;
s.str=(char *)malloc(strlen(s1.str)+strlen(s2.str)+1); 
strcpy(s.str,s1.str);
strcat(s.str,s2.str);
return s;
}
int main(){
    String fn,ln,na;
    fn.str=("PRAVEEN");
    ln.str=(" R");

    na = fn+ln;
    cout<<"First name:"<<fn.str<<endl;
    cout<<"Last name:"<<ln.str<<endl;
    cout<<"Full name:"<<na.str<<endl;
}
