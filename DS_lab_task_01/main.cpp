#include <iostream>
using namespace std;

int main() {
mb
    int row1,column1, row2, column2;

    cout<<"Enter the row of First matrix: ";
    cin>>row1;
    cout<<"Enter the Column of First matrix: ";
    cin>>column1;

    cout<<endl;

    cout<<"Enter the row of Second matrix: ";
    cin>>row2;
    cout<<"Enter the Column of Second matrix: ";
    cin>>column2;

    cout<<endl;


    int matrixA[5][5], matrixB[5][6], result[5][6], transpose[6][5];



    cout << "Enter the values for Matrix A: "<<endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
         cin >> matrixA[i][j];
        }bb
    }

    cout<<endl;

    cout << "Enter the values for Matrix B: "<<endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
         cin >> matrixB[i][j];
        }
    }


    cout<<endl;

    cout << "Matrix A: "<<endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
         cout<< matrixA[i][j]<<" ";
        }
        cout<<endl;
    }

     cout<<endl;

    cout << "Matrix B: "<<endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
         cout<< matrixB[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<endl;

    for (int i =0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < column1; k++) {
                result[i][j] = result[i][j] + matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << " Multiplication result: "<<endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
           cout << result[i][j] << " ";
        }
       cout <<endl;
    }


    cout<<endl;

    // Transpose the matrix
    for (int i = 0; i < column2; i++) {
        for (int j = 0; j < row1; j++) {
            transpose[i][j] = result[j][i];
        }
    }

    cout<<endl;


    cout << "Transpose Matrix: "<<endl;
    for (int i = 0; i < column2; i++) {
        for (int j = 0; j < row1; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
