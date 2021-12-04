#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int>&el1,vector<int>&el2){
    return el1[1]<el2[1];
}

int main(){
    vector<vector<int>>acti={{4,5},{3,7},{6,8},{2,10},{5,15}};
    sort(acti.begin(),acti.end(),comp);
    for(int i=0;i<acti.size();i++){
        cout<<acti[i][0]<<" "<<acti[i][1]<<endl;
    }

    int free=0;
    int ans=0;
    for(int i=0;i<acti.size();i++){
        if(free<=acti[i][0]){
            ans++;
            free=acti[i][1];
            cout<<acti[i][0]<<" "<<acti[i][1]<<endl;
        }
    }
    cout<<ans<<endl;
}