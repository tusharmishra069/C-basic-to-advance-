#include<iostream>
using namespace std;

// //question addition of matrix
int main(){
    int row1, col1, row2 , col2;
    cout<<"enter the size of row1 and col1";
    cin>>row1>>col1;
    cout<<"enter the size of row2 and col2";
    cin>>row2>>col2;
    int m1[row1][col1];
    int m2[row2][col2];
    int sum[row1][col1];
    cout<<"enter the first matrix: "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin>>m1[i][j];
        }
        
    }
    cout<<"enter the Second matrix: "<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin>>m2[i][j];
        }
        
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            sum[i][j]= m1[i][j]+m2[i][j];
        }
    
    }
    cout<<"sum of the matrix is: "<<endl;
        for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
}