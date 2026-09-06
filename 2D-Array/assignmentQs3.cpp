#include<iostream>
using namespace std;
void transposeMatrix(int matrix[][3], int rows, int cols) {
    int transpose[cols][rows];
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    for(int i=0; i<cols; i++) {
        for(int j=0; j<rows; j++) {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;
    transposeMatrix(matrix, rows, cols);
    return 0;
}