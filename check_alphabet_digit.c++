#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character - " ;
    cin >> ch ;
    if( ch>=65 && ch<=122 ){
        cout<<"Entered character is an alphabet";
    }
    else if( ch>=48 && ch<=57 ){
         cout<<"Entered character is a digit";
    }
    else{
         cout<<"Entered character is a special character";
    }
}