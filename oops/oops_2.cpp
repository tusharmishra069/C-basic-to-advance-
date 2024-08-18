#include<iostream>
using namespace std;

// question create a class for the birds and attribute name and speed  behaviour flying 
// output has be 2 objects  and compare their distance 


class Bird{
    public:
    string name1 = "eagle";
    string name2 = "parot";
    int s1 = 50;
    int s2 = 25;
    void distance(int hours){
        int total1 = s1*hours;
        int total2 = s2*hours;
        cout<<"distance of eagle: "<<total1<<endl;
        cout<<"distance of parot: "<<total2<<endl;
    }
    
};

int main(){
    Bird obj;
    obj.distance(5);

}