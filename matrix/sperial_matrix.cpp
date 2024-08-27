#include<iostream>
using namespace std;
int main(){
    int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int dir;
    for(int dir=0;dir<7;dir++){
    if (dir == 0)
    { 
     for(int i=0;i<=0;i++){
            for (int j = 0; j<4; j++)
        {
                cout<<m[i][j]<<" ";
        }
            break;
            
    }
}
    else if (dir==1)
    {
        while (auto j=3){

            for (int i = 1; i < 4; i++)
            {
                cout<<m[i][j]<<" ";
            }
            
        break;
        }
        
    }
    else if (dir ==2)
    {
            while (auto i=3)
        {
            for (int j = 2; j >=0; j--)
            {
                cout<<m[i][j]<<" ";
            }
            break;
        }
    }
    else if (dir == 3)
    { 
     for(int j=0;j<=0;j++){
            for (int i = 2; i >0; i--)
        {
                cout<<m[i][j]<<" ";
        }
            break;
            
    }
}
else if(dir == 4){
    while(int i=1){
        for (int j = 1; j < 3; j++)
        {
            cout<<m[i][j]<<" ";
        }
        break;
    }
}
else if(dir == 5){
    while (int i=2)
    {
        for(int j=2;j<=2;j++){
            cout<<m[i][j]<<" ";
        }
        break;
    }
    
}
else if(dir==6){
    while (int j=1)
    {
        for (int i=2; i <= 2; i++)
        {
            cout<<m[i][j]<<" ";
        }
        break;
    }
    
}
}
}
