#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    bool y=false;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int k=0;
    int j=n-1;
    sort(v.begin(),v.end());
    while (k<j)
    {
        int sum=v[k]+v[j];
        if(sum<s) {k++;}
        else if(sum>s) {j--;}
        else if(sum==s){
            y = true;
            break;
        }
        
    }

    if(y) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
}