# StatementsAndOperators
 Expressions, Statements and Operators

* Experssions

* Statements and block statements

* Operators

  - Assignments
 
  - Arithmetic
 
  - Increments and decrement
 
  - Equality
 
  - Relational
 
  - Logical
 
  - Compund assignment
 
  - Precedence
 

 # Expression and statements
 Expressions

 An expression is:

  - The most basic building block of a program.

  - "a sequence of operators and operands that specifies a computation'

  - Computes a value from a number of operators.

  - There is much, much more to expressions - not necessary at this level.

# Expressions - Examples

       34                           //literals
       favourite_number             // variable
       1.5 + 2.8                    // addition
       2 * 5                        // multiplication
       a > b                        // relational
       a = b                        // assignment

Statements

A statement is:

  - A complete line of code that performs some action.

  - Usually terminated with a semi-colon

  - Usually contain expressions

  - C++ has many types of statements

    * express, null, compound, selection, iteration, declaration, jump, try blocks, and other.
   
 # Statement - Examples

        int x;                          // declaration
        favourite_number = 12;          // assignment
        1.5 + 2.8;                      // expression
        x = 2 * 5;                      // assignment
        if (a > b) cout << "a is greater than b";  // if;
  

# Using Operators
* C++ has a rich set of operators

  - unary, binary, ternary

* Common operators can be grouped as follow:

  - assignment
 
  - arithmetic
 
  - increment/decrement
 
  - relational
 
  - logical
 
  - member access
 
  - other


# Mixed Type Expressions
* C++ operators occur on the same type operands.

* If operands are different types, C++ will convert one.

* Important! since it could affect calculations results.

* C++ will attempt to automatically convert types (coercion). If can't, a complier error will occur


Conversions

* Higher vs. Lower types are based on the size of the value the type can hold.

  - long double, double, float, unsigned long, long, unsigned int, int.
  - short and char types are always converted to int.

* Type Coercion: conversion of operand to another data type.

* Promotion: conversion to a higher type.
  - Used in mathematical expressions

* Demotion: conversion to a lower type.
  - Used with assignments to lower type.

# Examples

         - lower op higher         the lower is promoted to a higher
            2 * 2.5
            2 is promoted to 2.0

         - lower = higher;        the higher is demoted to a lower
            int num {0};
            num  = 100.2;

  
  Explicit Type Casting - static_cast<Type>

            int total_amount {100};
            int total_number {8};
            double average {0.0};

            average = total_amount / total_number;
            cout << average << endl;                    // display 12

            average = static_cast<double> (total_amount) total_number;
            cout << average << endl;                  // display 12.5












