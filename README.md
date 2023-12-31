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

            average = static_cast<double> (total_amount) / total_number;
            cout << average << endl;                  // display 12.5


# Testing for Equality
* Compares the values of 2 expressions

* Evaluates to a Boolean (True or False, 1 or 0)

* Commonly used in control flow statements

  - expr1 == expr2
 
  - expr1 != expr2
 
  - 100 == 200
 
  - num1 != num2
 
* The == and != operators

               bool result {false};

               result = (100 == 50+50);

               result = (num1 != num2);

               cout << (num1 == num2) << endl;   // 0 or 1
               cout << std::boolalpha;
               cout << (num1 == num2) << endl;   // true or fals
               cout << std::noloopalpha;


# Relational Operators
* expr1 expr2

        Operator                   Meaning
          >                    greater  than
          >=                   greater than or equal to
          <                    less than
          <=                   less than or equal to
          <=>                  three- way comparison (c++20)
   

# Logical Operator

        Operator                   Meaning
        not                       negation
         !                          

         and                      logical and
         &&

         or                          logical or
         ||   

Precedence

* not has higher precedence than and

* and has higher precedence than or

* not is unary operator

* and and or are binary operators

Example

         num12 >= 10 && num1 < 20
         num1 <= 10 || num1 >= 20

         !is_raining && temperature > 32.0

         is_raining || is_snowing

         temprature > 100 && is_humid || is_raining


Short_Circuit Evaluation

* When evaluating a logical expression C++ stops as soon as the result is known

# Compound Assignment Operators

![Screenshot 2023-10-12 120831](https://github.com/AndreD4/C_Language_Part5/assets/46080715/6d7a8369-3370-4406-bc67-3cb3222a497d)

Examples

       lhs op= rhs; // lhs = lhs op (rhs);

       a += 1;         // a = a + 1;
       a /= 5;         // a = a / 5;
       a *= b + c;     // a = a * (b + c);

       cost += items * tax;
                       // cost = cost + (items * tax);



















