#include <iostream>

using namespace std;

int main() 
{   
    int counter {10};
    int result {0};
    
// // Example simple increments    
//    cout << "Counter: " << counter <<endl;
//    
//    counter = counter + 1;
//    cout << "Counter: " << counter <<endl;
//    
//    counter++;
//    cout << "Counter: " << counter <<endl;
//    
//    ++counter;
//    cout << "Counter: " << counter <<endl;

// Example 2 - preincrement
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter" << counter << endl;
//    
//    result = ++counter; // Note the pre increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

// Example 3- postincrement
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = counter++; // Note the post increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
// Example 4
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter" << counter << endl;
//    
//    result = ++counter + 10; // Note the pre increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;    
    
// Example 5

    counter = 10;
    result = 0;
    
    cout << "Counter" << counter << endl;
    
    result = counter++ + 10; // Note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;








  
    cout << endl;
    return 0;    
}