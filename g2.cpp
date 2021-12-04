#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n];
      int ans=0;
      if(n<2){
          cout<<1<<endl;
      }else{
          for(int i=1;i<=n;i++){
             if((a[i]&a[i+1])>0){
            ans+=1;
                   }
          }
      cout<<ans<<endl;
     }
   }
}