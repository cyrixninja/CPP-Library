/*
Calculator in C++ using Switch Case
*/
#include <iostream>
using namespace std;

int main(){
    int int1,int2;
    cout << "Enter the Value of First Integer :";
    cin >> int1;
    cout << "Enter the Value of Second Integer :";
    cin >> int2;
    char opt;
    cout << "Enter Value  of Operator :";
    cin >> opt;

    switch (opt)
    {
    case '+':
        cout << (int1+int2);
        break;
    case '-':
        cout <<  (int1-int2);
        break;
    case '*':
        cout <<  (int1*int2);
        break;
    case '/':
        cout <<  (int1/int2);
        break;    
    default:
        break;
    }

    }
