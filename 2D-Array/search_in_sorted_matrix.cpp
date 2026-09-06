#include<iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {
    int row = 0, col = m-1;
    
    //O(n+m)
    while(row < n && col >= 0) {
        if(mat[row][col] == key) {
            cout<<"Found at cell (" << row <<","<< col <<")\n";
            return true;
        } else if(mat[row][col] > key) {
            //left
            col--;
        } else {
            //down
            row++;
        }
    }
    cout<<"Key not found\n";
    return false;
}

int main() {
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    search(matrix, 4, 4, 33);
    return 0;             
}
