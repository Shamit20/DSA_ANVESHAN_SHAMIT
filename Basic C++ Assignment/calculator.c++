#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a , b;
    cout << "Enter first number - " ;
    cin >> a;
    cout << "Enter second number - " ;
    cin >> b;
    int choice;
    cout << "Enter your choice from below :- \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Remainder \n 6.Power \n 7.Square root \n"  ;
    cin >> choice ;
    long long int power = pow(a,b);
    switch(choice) {
        case 1:
            cout << "Addition of two numbers is " << a+b ;
        
        break;
        case 2:
            cout << "Difference of two numbers is " << a-b ;
        
        break;
        case 3:
            cout << "Product of two numbers is " << a*b ;
        
        break;
        case 4:
            cout << "Quotient of two numbers is " << a/b ;
        
        break;
        case 5:
            cout << "Remainder of two numbers is " << a%b ;
        
        break;
        case 6:
            cout << "a to the power b is " << power;
        
        break;
        case 7:
            cout << "Square of a number is " << sqrt(a) ;
            cout << "\nSquare of b number is " << sqrt(b) ;
        
        break;
        default:
        cout << "Wrong choice" ;
    }
}