#include <iostream>
using namespace std;
int main() 
{
    int n , digit;
    cout << "Enter a number to check for palindrome - " ;
    cin >> n ;
    int ans = 0;
    int a = n;
    while (a!=0) {
        digit = a % 10;
        ans = ans * 10 + digit ;
        a = a / 10; 
    }
    if(ans == n) {
        cout << "Number is a palindrome" ;
    }
    else {
        cout << "Number is not a palindrome" ;
    }
}