#include<bits/stdc++.h>
using namespace std;
#define SQR(x) x*(x) 

int main() {

    int i, j;

    cin >> i >> j;

    j = SQR(i + j);

    cout << j << endl;

    return 0;
}