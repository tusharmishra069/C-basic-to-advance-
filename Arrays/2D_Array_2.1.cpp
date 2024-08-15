#include<iostream>
using namespace std;

//dynamic array :- user input

int main(){
    int row, col;
    cout<<"enter the no. of rows and cols: "<<endl;
    cin>>row>>col;
    int my_array[row][col];
    cout<<"enter the array element: -"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>my_array[i][j];
        }
        
    }
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<my_array[i][j]<<" ";
        }
        cout<<endl;
    }
}