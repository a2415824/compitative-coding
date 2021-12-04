#include<bits/stdc++.h>
using namespace std;
int mat[1001][1001];

void matrix(){
    
    int i,j;
    for(i=1;i<=1000;i++){
        mat[i][1]=i*(i+1)/2;
        for(j=2;j<=1000;j++)
        mat[i][j]=mat[i][j-1]+(j-1)+(i-1);
    }
}
void print_matrix(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
         cout<<mat[i][j]<<" ";
         cout<<"\n";
        
    }
}

int main(){
    matrix();
    print_matrix();
    int t;
    cin>>t;
    while (t--)
    {
        int x1,y1,x2,y2,sum=0;
        cin>>x1>>y1>>x2>>y2;

        for(int i=x1;i<=x2;i++)
        sum += mat[i][y1];

        for(int i=y1+1;i<=y2;i++)
        sum += mat[x2][i];

        cout<<sum<<endl;
    }
    
}