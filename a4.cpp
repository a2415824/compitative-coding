#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;


    while(t!=0){
        int N,D,H,s;
        cin>>N>>D>>H;
        int b=0;
        int arr[N];
        
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        s=arr[0];
        for(int j=1;j<N;j++){
             if(arr[j]!=0){
                s=s+arr[j];
             }
             if(arr[j]==0){
                 s=s-D;
             }
             if(s>H){
                 b=b+1;

             }
        }
        if(b>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}      


    
    
    

