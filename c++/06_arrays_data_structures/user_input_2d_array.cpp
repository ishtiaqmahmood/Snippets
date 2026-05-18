#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the elements of the matrix : " << endl;
    cout << "Row : ";
    cin >> n;
    cout << "Col : ";
    cin >> m;
    cout << endl;

    int A[n][m];

    // taking user input
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cout << "A["<<row<<"]["<<col<<"] = ";
            cin >> A[row][col];
        }
    }

    cout << "Matrix : " << endl;
    // printing 2d array
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cout << A[row][col] << " ";
        }
        cout << endl;
    }

}

