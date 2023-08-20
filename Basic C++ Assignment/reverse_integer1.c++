#include <iostream>
using namespace std;
int main() 
{
    int n , digit;
    cout << "Enter a number to reverse - " ;
    cin >> n ;
    int ans = 0;
    int a = n;
    while (a!=0) {
        digit = a % 10;
        ans = ans * 10 + digit ;
        a = a / 10; 
    }
    cout << "Reversed number is " << ans;
}