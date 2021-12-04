#include<bits/stdc++.h>
using namespace std;
int checkSemiprime(int num)
{
    int cnt = 0;
 
    for (int i = 2; cnt < 2 && i * i <= num; ++i)
        while (num % i == 0)
            num /= i, ++cnt; // Increment count
                             // of prime numbers
 
    // If number is greater than 1, add it to
    // the count variable as it indicates the
    // number remain is prime number
    if (num > 1)
        ++cnt;
 
    // Return '1' if count is equal to '2' else
    // return '0'
    return cnt == 2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        checkSemiprime(n);
        if(checkSemiprime(n)){
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
}