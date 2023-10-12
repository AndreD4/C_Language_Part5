#include <iostream>

using namespace std;

int main() 
{
    
    bool equal_result {false};
    bool not_equal_result {false};

    int num1{}, num2{};
    
    cout << boolalpha;   //Will display true or false instead of 1/0 for booleans
    
    
//    cout << "Enter two integers seprarated by space: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    cout << "Comparision result (equal): " << equal_result << endl;
//    cout << "Comparision result (not equal): "<<  not_equal_result << endl;
    
    
    char char1{}, char2{};
    cout << "Enter two integers seprarated by space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result (equal): " << equal_result << endl;
    cout << "Comparision result (not equal): "<<  not_equal_result << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;    
}