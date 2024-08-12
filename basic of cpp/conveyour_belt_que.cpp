#include <iostream>
using namespace std;

int main() {
    int conveyorBeltSpeed ; // Speed of a conveyor belt
    cout<<"give the speed between 1-10:- ";
    cin>>conveyorBeltSpeed;

    if (conveyorBeltSpeed > 9) {
        cout<<"Warning: Conveyor belt is moving too fast"<<endl;
    } else if (conveyorBeltSpeed < 2) {
        cout<<"Alert: Conveyor belt is moving too slow"<<endl;
    } else {
       cout<<"Conveyor belt is operating at optimal speed"<<endl;
    }
}