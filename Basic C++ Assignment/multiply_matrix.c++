#include <iostream>
using namespace std;
int main()
{
    int mat1[10][10] , mat2[10][10] , mult[10][10] = {0}  ;
    int m , n , p , q;
    cout << "Enter row for first matrix - " ;
    cin >> m ;
    cout << "Enter column for first matrix - " ;
    cin >> n ;
    
    cout << "Enter row for second matrix - " ;
    cin >> p ;
    cout << "Enter column for second matrix - " ;
    cin >> q ;
    cout << endl;
    if( n==p ) {
        //Getting first matrix
        for( int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                cout << "Enter element for matrix 1 - " ;
                cin >> mat1[i][j] ;
            }
            cout << "\n" ;
        }
        cout << endl;
        //Getting second matrix
        for( int i = 0 ; i < p ; i++) {
            for(int j = 0 ; j < q ; j++) {
                cout << "Enter element for matrix 2 - " ;
                cin >> mat2[i][j];
            }
            cout << "\n" ;
        }
        for( int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < q ; j++) {
                for( int k = 0 ; k < n ; k++){
                    mult[i][j] += mat1[i][k] * mat2[k][j];
                }
            }    
            cout << "\n" ;
        }
        cout << endl;
        cout << "Multiplied matrix is -:" << endl ;
        for( int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < q ; j++) {
                cout << mult[i][j] << " " ;
            }
            cout << "\n" ;
        }
    }
    else {
        cout << "Column of first matrix shoul be equal to row of second matrix";
    }
}