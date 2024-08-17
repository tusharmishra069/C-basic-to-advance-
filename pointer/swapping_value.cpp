#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//using pointer
void swap(int* x, int* y){
    int temp= *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x = 10, y=20;
    cout<<"before swap: "<<x<<","<<y<<endl;
    swap(&x,&y);
    cout<<"after swap: "<<x<<","<<y;
}