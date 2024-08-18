#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"enter the rows:- ";
    cin>>row;
    cout<<"enter the col:- ";
    cin>>col;
    cout<<"enter the no of element:- ";
    int arr[row][col];
    int arrtrans[row][col];
    for ( i = 0; i < row; i++)
    {
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"original matrix - "<<endl;
    for ( i = 0; i < row; i++)
    {
        for(j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            arrtrans[i][j]=arr[j][i];
        } 
    }
    cout<<"transpose matrix: "<<endl;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cout<<arrtrans[i][j]<<" ";
        }
        cout<<endl; 
    }
    cout<<"rotated matrix: "<<endl;
    for ( i = 0; i < row; i++)
    {
        for ( j = col-1; j>=0; j--)
        {
            cout<<arrtrans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
