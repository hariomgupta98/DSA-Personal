#include<iostream>
using namespace std;

int main() {
    int nums[][3] = {{1, 4, 9},{11, 4, 3},{2, 2, 3}};
    int sum = 0;
    int col = 3;

    // The second row is at index 1
    for(int j=0; j<col; j++) {
        sum += nums[1][j];
    }
    cout<<"The sum of the numbers in the second row is: "<<sum<<endl;
    return 0;         
}