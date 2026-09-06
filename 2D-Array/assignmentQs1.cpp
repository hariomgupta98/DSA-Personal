//Print the number of all 7’s that are in the 2d array.

#include<iostream>
using namespace std;

int main() {
int rows = 2, cols = 3;
int arr[2][3] = {{4, 7, 8}, {8, 8, 7}}; // An array of arrays
int count = 0; //counut number of 7s

for(int r=0; r<rows; r++) {
    for(int c=0; c<cols; c++) {
        if(arr[r][c] == 8){
            count++;
        }
    }
}
cout<<"The number of 8's in the matrix is: "<<count<<endl;
return 0;
}
