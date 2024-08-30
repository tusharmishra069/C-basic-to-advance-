#include<iostream>
#include<map>
#include<iterator>
using namespace std;

// itreator

int main() {
    map<int, string> student;
    student[1] = "Rishab";
    student[2] = "Sushant";
    student[3] = "Sri";
    student[4] = "Tushar";
    map<int, string>::iterator iter;
    for (iter = student.begin(); iter != student.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }
    return 0;  
}
