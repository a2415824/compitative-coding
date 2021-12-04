#include<bits/stdc++.h>
#include<numeric>
using namespace std;


  
int main(){
	int t;
	cin>>t;
	while (t--)
	{
		int X,Y;
		int sl=0;
		cin>>X>>Y;
		if((X%2==0)&&(Y%2==0)){
			sl=0;

		}else if((__gcd(X=1,Y)>=1)||(__gcd(X,Y+1)>=1)){
			sl=1;
		}else{
			sl=2;
		}
		cout<<sl<<endl;
		
	}
	
}