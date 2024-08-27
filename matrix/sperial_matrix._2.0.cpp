#include<iostream>
using namespace std;


int main(){
    int n,m;
    cout<<"enter the size of the matrix:(m*n)";
    cin>>m>>n;
    cout<<"enter array elements "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //row:top,down
    //col:left,right
    int top=0,bottom=m-1,left=0,right=n-1;
    int direction=0;
    //direction 0:left to right
    //direction 1:top to bottom
    //direction 2:right to left
    //direction 3:bottom to top

    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
        }
        if(direction==1){
            for(int i=top;i<=bottom;i++){
                   cout<<arr[i][right]<<" ";
            }
            right--;
        }    
        if(direction==2){
            for(int i=right;i>=left;i--){
                   cout<<arr[bottom][i]<<" ";
            }
            bottom--;
         }
        if(direction==3){
            for(int i=bottom;i>=top;i--){
                   cout<<arr[i][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;
        }
        return 0;
    }
int main(){
    int n,m;
    cout<<"enter the size of the matrix:(m*n)";
    cin>>m>>n;
    cout<<"enter array elements "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //row:top,down
    //col:left,right
    int top=0,bottom=m-1,left=0,right=n-1;
    int direction=0;
    //direction 0:left to right
    //direction 1:top to bottom
    //direction 2:right to left
    //direction 3:bottom to top

    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
        }
        if(direction==1){
            for(int i=top;i<=bottom;i++){
                   cout<<arr[i][right]<<" ";
            }
            right--;
        }    
        if(direction==2){
            for(int i=right;i>=left;i--){
                   cout<<arr[bottom][i]<<" ";
            }
            bottom--;
         }
        if(direction==3){
            for(int i=bottom;i>=top;i--){
                   cout<<arr[i][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;
        }
        return 0;
    }