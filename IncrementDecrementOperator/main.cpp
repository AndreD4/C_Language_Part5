#include <iostream>

using namespace std;

int main() 
{   
    int counter {10};
//    int result {0};
    
 // Example simple increments    
    cout << "Counter: " << counter <<endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter <<endl;
    
    counter++;
    cout << "Counter: " << counter <<endl;
    
    ++counter;
    cout << "Counter: " << counter <<endl;
    
    cout << endl;
    return 0;    
}