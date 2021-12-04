#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        bool po=true;
        long A[n+1];
        long B[n+1];
        for(int i=1;i<=n;i++) cin>>A[i];
        for(int i=1;i<=n;i++) cin>>B[i];
        long dif=0;
        for(int i=1;i<=n-2;i++){
            if(A[i]>B[i]){
                po=false;
                break;
            }
            if(A[i]!=B[i]){
                dif=B[i]-A[i];
                A[i]+=dif;
                A[i+1]+=2*dif;
                A[i+2]+=3*dif;
            }
        }
        if(!po||(A[n]!=B[n])||(A[n-1]!=B[n-1]))
        cout<<"NIE"<<"\n";
        else cout<<"TAK"<<"\n";
    }
    
}