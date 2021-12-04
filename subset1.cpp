#include<bits/stdc++.h>
using namespace std;

int sunbset(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      sunbset(a,n);
      
   }
   return 0;
}