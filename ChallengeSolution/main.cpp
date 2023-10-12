//    You may assume that the number of cents entered is greater than or equal zero
//    
//    the program should then display how to provide that change to the user
//    
//    in the US:
//        1 dollar is 100 cents
//        1 quarters is 25 censt 
//        1 dime is 10 cents 
//        1 nickel 5 cents 
//        and 
//        1 penny is 1 cent
//    
//    Here is a sample run:
//    
//    Enter an amount in cents: 92
//    
//    You can provide this change as follow:
//    dollars : 0
//    quarters : 3 
//    dimes : 1
//    nickels : 1
//    pennis : 2





#include <iostream>

using namespace std;

int main() 
{
    // defines conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};


    int change_amount {};
    
    // Solution 1 not using modulo operator
    
    cout << "Enter an amount in cents: ";
    cin >> change_amount;
    
    int balance{}, dollars{}, quarter{}, dimes{}, nickel{}, pennies{};
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarter = balance / quarter_value;
    balance -= quarter * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickel = balance / nickel_value;
    balance -= nickel * nickel_value;
    
    pennies = balance;
    
    cout << endl;
    return 0;    
}