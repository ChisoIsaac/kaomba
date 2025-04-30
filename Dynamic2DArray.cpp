#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    do {
     cout << "enter number of rows (max 3) ";
     cin >> rows;
     if (rows < 1 || rows > 3 ) {
        cout << "invalid input ";
     }   
    }
    while (rows < 1 || rows > 3);
    do {
        cout << "enter number of columns (max 3) ";
        cin >> cols;
        if (cols < 1 || cols > 3 ) {
            cout << "invalid input ";
        }
    }
while ( cols < 1 || cols > 3);
double** array2D = new double*[rows];
for (int i = 0; i < rows; ++i) {
    array2D[i] = new double[cols];
}
cout << "\nEnter array elements:\n";
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j ) {
        cout << "enter value for element [" << i << "][" << j << "]: ";
        cin >> array2D[i][j]; 
    }
}
cout << "\nArray contents:\n";
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        cout << array2D[i][j] << "\t";
    }
    cout << "\n";
}
for (int i = 0; i < rows; ++i) {
    delete[] array2D[i];
}
delete[] array2D;
return 0;
}

