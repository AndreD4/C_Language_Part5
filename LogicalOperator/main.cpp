#include <iostream>

using namespace std;

int main() 
{
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is bewteen two other intgers
    // assume lower < up
    cout << "Enter and integer - the bonds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool within_bonds {false};
    
    within_bonds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bonds << endl;
    
    
    
    
    
    cout << endl;
    return 0;    
}