#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        map<string,int >times;
        int n;
        string s;
        cin>>n;
        int ans=0;
        while (n--)
        {
            cin>>s;
            if(times.count(s)){
                ans += times[s]/2;
            }
            else{
                int hand[256]{0};
                int crd=0;
                hand['d']=1;
                hand['f']=1;
                hand['j']=2;
                hand['k']=2;

                int len=s.length();
                for(int i=0;i<len;i++){
                    if(i==0) crd +=2;
                    else if(hand[s[i]]==hand[s[i-1]]) crd+=4;
                    else crd+=2;
                }
                times[s]=crd;
                ans+=crd;


            }
        }
        cout<<ans<<endl;
        
        
        
    }
    
}