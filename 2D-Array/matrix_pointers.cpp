// #include<iostream>
// using namespace std;

// int main() {
//     int matrix[4][4] = {{1, 2, 3, 4}, 
//                         {6, 7, 8, 9},
//                         {10, 11, 12, 13},
//                         {14, 15, 16, 17}};

//     cout<<matrix<<" = " <<&matrix[0][0]<<endl;
//     cout<<matrix+1<<" != "<<&matrix[0][1]<<endl;
//     cout<<matrix+1<<" = "<<&matrix[1][0]<<endl;
//     return 0;                 
// }

#include<iostream>
using namespace std;

void func(int mat[][4], int n, int m) {
    cout<<"0th row ptr "<<mat<<endl;
    cout<<"1st row ptr "<<mat+1<<endl;
    cout<<"2nd row ptr "<<mat+2<<endl;
    
    cout<<"0th row vlaue "<<*mat<<endl;
    cout<<"1st row vlaue "<<*(mat+1)<<endl;
    cout<<"2nd row value "<<*(mat+2)<<endl;

    cout<<*(*(mat + 2) + 2)<<endl;
}

void func2(int (*mat)[4], int n, int m) {
    
}
int main() {
    int matrix[4][4] = {{1,2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10 ,11, 12},
                        {13, 14, 15, 16}};

   func(matrix, 4, 4);                     
}