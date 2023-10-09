
// Arithmetic operators

/*
    + addition
    - subtraction
    * multiplication
    / division
    % modulo or remainder (only works on integers)

    +,-,* and / operators are overloaded to work with multiples types such as int, double , etc.
    % only for integer types

 */


#include <iostream>

using namespace std;

int main() 
{   
    
    int num1 {10};
    int num2 {20};
    
    
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    
    cout << endl;
    return 0;    
}