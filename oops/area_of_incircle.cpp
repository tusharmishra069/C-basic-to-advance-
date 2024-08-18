#include<iostream>
#include<cmath>
using namespace std;

// ques calculate area of incircle of a right angle triangle constrant user input has been only for two sides 

class Area{
    public:

    void incircle(){
    float p,b;
    float pi = 3.14;
    cout<<"enter the perendicular:- ";
    cin>>p;
    cout<<"enter the base:- ";
    cin>>b;
    float h;
    h = sqrt((p*p)+(b*b));
    cout<<"hypo: "<<h<<endl;
    float r;
    r = (((p+b)-h)/2);
    float incir;
    incir = pi*(r*r);
    cout<<"Area of incircle is: "<<incir;
    }

};
int main(){
    Area obj;
    obj.incircle();
}
