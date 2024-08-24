#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int r;
    int c;
    cout<<"enter the size of row and col: ";
    cin>>r>>c;
    vector<vector<int>>mat(r,vector<int>(c));
    cout<<"elements"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"matrix"<<endl;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}