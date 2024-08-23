// Mini Project Submission: ATM Machine Simulation in C++


// 1. Synopsis:

// The ATM Machine Simulation project is designed to emulate basic operations of an ATM using the C++ programming language. 
// The project allows users to deposit money, withdraw money, and check their balance. 
// The simulation mimics real-life ATM machine interactions, ensuring that users can make multiple transactions until they decide to exit. 
// This project is a great example of using object-oriented programming concepts, decision-making structures, and loops in C++.

// 2. Pseudo Code:

// START
// DISPLAY "=========TM ATM========="
// INITIALIZE balance_amount to 0.0

// FUNCTION atm_machine_transaction()
//     DISPLAY available choices (Deposit Money, Withdraw Money, Balance Amount)
//     READ user's choice

//     IF choice is 1 (Deposit Money) THEN
//         PRt to balance
//             DISPLAY updated bOMPT user to enter deposit amount
//         IF deposit amount is positive THEN
//             ADD deposit amounalance
//         ELSE
//             DISPLAY "Invalid input"
//         END IF

//     ELSE IF choice is 2 (Withdraw Money) THEN
//         PROMPT user to enter withdrawal amount
//         IF withdrawal amount is positive THEN
//             IF withdrawal amount is less than or equal to balance THEN
//                 SUBTRACT withdrawal amount from balance
//                 DISPLAY updated balance
//             ELSE
//                 DISPLAY "Insufficient funds"
//             END IF
//         ELSE
//             DISPLAY "Invalid input"
//         END IF

//     ELSE IF choice is 3 (Balance Amount) THEN
//         DISPLAY current balance
//     END IF

//     PROMPT user to proceed with another transaction or exit
//     READ user's new choice
//     IF new choice is 1 (Proceed) THEN
//         CALL atm_machine_transaction()
//     ELSE
//         EXIT function
//     END IF
// END FUNCTION

// CALL atm_machine_transaction()

// DISPLAY "Thank you for the visit!"
// END




// 3. Concepts Used (C++):


// Classes and Objects: The ATM Machine functionalities are encapsulated within the atm_machine class.
// Switch Case: The program uses the switch statement to manage multiple user choices.
// Functions: The class method atm_machine_transaction() handles the core functionality.
// Conditional Statements: if-else statements are used to check for valid inputs and handle scenarios like insufficient balance.
// Loops: Recursion is used to allow the user to perform multiple transactions without restarting the program.


// 4. Source Code:


#include <iostream>
using namespace std;


class atm_machine{
    public:
    int new_choice;
    int choice;
    float balance_amount = 0.0;
    

    // Function for operations in ATM Machine+--
    void atm_machine_transaction(){
    cout << "Choices Available in the ATM Machine" << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Balance Amount" << endl;
    cout << "\n";
    cout << "Your Choices: ";
    cin >> choice;
    float withdraw_amount;
    float deposit_amount;
    switch(choice)
    {
        case 1: //for deposite
            cout << "\nEnter the amount to deposit: ";
            cin >> deposit_amount;
            if(deposit_amount>0){
            balance_amount += deposit_amount;
            cout << "Your current balance is Rs. " << balance_amount << ". Thanks for depositing!" << endl;
            }
            else{
                cout<<"invalid no..."<<endl;
            }
            cout << "Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
            cout << "Your option: ";
            cin >> new_choice;
            if (new_choice == 1){
                atm_machine_transaction();
            }

        break;
        case 2://for withdraw
            cout << "\nPlease enter amount to withdraw: ";
            cin >> withdraw_amount;
            if(withdraw_amount>0){
            if (withdraw_amount > balance_amount )
            { 
                cout << "Insufficient fund! Please proceed to deposit money." << endl;
                cout << "Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
                cout << "Your option: ";
                cin >> new_choice;
                if (new_choice == 1){
                    atm_machine_transaction();
                }
            }
            else
            {
                balance_amount -= withdraw_amount;
                cout << "You have withdrawn Rs. " << withdraw_amount << " and your balance is Rs. " << balance_amount << endl;

            }
            }
            else{
                cout<<"invaild input......."<<endl;
                }
                cout << "Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
                cout << "Your option: ";
                cin >> new_choice;
                if (new_choice == 1){
                   atm_machine_transaction();
            }

        break;
        case 3://for balance
            cout << "Your current bank balance is: " << balance_amount << endl;
            cout << "Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;
            cout << "Your option: ";
            cin >> new_choice;
            if (new_choice == 1){
                atm_machine_transaction();
            }
        break;
    }
    }
};
int main(){
    cout<<"=========TM ATM========="<<endl;
    cout<<endl;
    atm_machine obj;
    obj.atm_machine_transaction();
    cout << "Thank you for the visit!";
    return 0;
}


// 5. Test Cases Output:

// Test Case	Input	Expected Output	       Actual Output	  Remarks
// 1	Deposit Rs. 500	    Balance: Rs. 500	Balance: Rs. 500	Pass
// 2	Withdraw Rs. 200	Balance: Rs. 300	Balance: Rs. 300	Pass
// 3	Withdraw Rs. 400	Insufficient funds	Insufficient funds	Pass
// 4	Check Balance	    Balance: Rs. 300	Balance: Rs. 300	 Pass
// 5	Deposit Rs. -100	Invalid input	     Invalid input	     Pass
