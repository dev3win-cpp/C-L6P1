//
//  main.cpp
//  C++L6P1
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>

using namespace std;
int month;
int main() {
    cout<<"Enter the month number"<<endl;
    cin>>month;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"This month has 31 days"<<endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"This month has 33 days"<<endl;
            break;
        case 2:
        {int year;
            cout<<"Enter the year: "<<endl;
            cin>>year;
            if(((year%4==0)&&(year%100!=0))||(year%400==0))
                cout<<"This month has 29 days";
            else cout<<"This month has 28 days";
        }
        default: cout<<"Wrong month number";
            break;
    }
    return 0;
}


/*
 In C++, the "switch" statement is a type of control flow statement that allows a program to evaluate an expression and execute a specific block of code based on the value of the expression. The "switch" statement is often used as an alternative to a series of "if-else" statements, when the expression being evaluated has multiple possible values.

 A basic "switch" statement in C++ has the following syntax:

 Copy code
 switch (expression) {
     case value1:
         // code to be executed if expression == value1
         break;
     case value2:
         // code to be executed if expression == value2
         break;
     ...
     default:
         // code to be executed if expression doesn't match any of the values
 }
 The "expression" is evaluated and its value is compared to the values specified in each "case" statement. If a match is found, the corresponding block of code is executed. The "break" statement is used to exit the switch statement once a matching case has been found. If no matching case is found and there is a default case, the default case will be executed.

 It's important to note that the expressions in the "case" statements must be constant expressions, such as integer literals, character literals, or enumeration constants.

 In addition, the switch statement is faster than multiple if-else statements when the number of cases is large.

 Copy code
 int grade = 3;

 switch(grade) {
     case 1:
     cout << "you got a C-";
     break;
     case 2:
     cout << "you got a C";
     break;
     case 3:
     cout << "you got a C+";
     break;
     case 4:
     cout << "you got a B-";
     break;
     default:
     cout << "Invalid grade";
 }
 In this example, the grade variable is being evaluated, and the corresponding message is printed.
 */
