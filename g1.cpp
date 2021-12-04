#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define AMMU ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;



int main(){
   AMMU
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;

    vector<int> b(2*n);
    for(int &i:b) cin>>i;

    map<int ,int> fre;
    for(int i:b){
       fre[i]++;
    }
    pair<int ,int> pir;

    for(auto pir:fre){
       
    }
   }
   return 0;
}