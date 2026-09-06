#include<iostream>
using namespace std;
// int main(){
    //....
    // int n;
    // cout<<"Enter the length of arry: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++) {
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++) {
    //     cout<<arr[i]<<" ";
    // }

    //.....

    //.......
    void printArr(int nums[], int n) {
        for(int i=0; i<n; i++) {
            cout<<nums[i]<<"  ";
        }
        cout<<endl;
    }

    int main() {
        int arr[] = {1, 3, 4, 5, 6, 9};
        int n = sizeof(arr) / sizeof(int);
        cout<<"Array size = "<<sizeof(arr)<<endl; //24
     printArr(arr, n);

    //......linear search
    // int linearSearch(int arr[], int n, int key) {
    //     for(int i=0; i<n; i++) {
    //         if(arr[i] == key) {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }

    // int main() {
    //     int arr[] = {2, 34, 54, 10, 32, 8, 9, 12};
    //     int n = sizeof(arr) / sizeof(int);
    //     cout<<linearSearch(arr, n, 10)<<endl;

    //.......reverse array
    //..extra space used 
    // void printArr(int *arr, int n) {
    //     for(int i=0; i<n; i++){
    //         cout<<arr[i]<<",";
    //     }
    //     cout<<endl;
    // }
    // int main() {
    //     int arr[] = {4, 5, 3, 2, 9};
    //     int n = sizeof(arr) / sizeof(int);

    //     int copyArr[n]; //copy array
    //     for(int i=0; i<n; i++) {
    //         int j = n-i-1;
    //         copyArr[i] = arr[j];
    //     }

    //     for(int i=0; i<n; i++) { //original arrry
    //         arr[i] = copyArr[i];
    //     }
 
    //     printArr(arr, n);

    //.......without extra space
    // void printArr(int *arr, int n) {
    //     for(int i=0; i<n; i++) {
    //         cout<<arr[i]<<",";
    //     }
    //     cout<<endl;
    // }

    // int main() {
    //     int arr[] = {3, 4, 5, 2, 8, 54};
    //     int n = sizeof(arr) / sizeof(int);

    //     int start = 0, end = n-1;

    //     while(start < end) {
    //         //swap
    //         // int temp = arr[start];
    //         // arr[start] = arr[end];
    //         // arr[end] = temp;

    //         //in C++ inbuild function for swap
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }

    //     printArr(arr, n);


    //.....binary search
    // int binSearch(int *arr, int n, int key) {
    //     int st = 0, end = n-1;

    //     while(st <= end) {
    //         int mid = (st + end) / 2;
    //         if(arr[mid] == key) {
    //             return mid; //key found
    //         }else if(arr[mid] < key ) {  //2nd half
    //             st = mid + 1;
    //         }else{
    //             //1 half
    //             end = mid - 1;
    //         }
    //     }
    //     return -1;
    // }
    // int main() {
    //     int arr[] = {3, 6, 9, 12, 15, 18, 21, 24};
    //     int n = sizeof(arr) / sizeof(int);

    //    cout<<binSearch(arr, n, 21)<<endl;

    //.......Array pointer
    // int main() {
    //     int arr[5];
    //     cout<<arr<<"\n";
    //     int y = 25;
    //     arr = &y; // its is a read only value not any triet

    //......pointer arithmetic
    // int main() {
    //     int a = 10;
    //     int *ptr = &a;
    //     cout<<ptr<<"\n";
    //     ptr++; //1 int++
    //     cout<<ptr<<"\n";
    //     ptr--;
    //     cout<<ptr<<"\n";

        //.........
        // void printArr(int *ptr, int n) {
        //     for(int i=0; i<n; i++) {
        //         cout<<*(ptr + i) <<"\n";
        //     }
        // }

        // int main() {
        //     int arr[] = {1, 2, 3, 4, 5};
        //     int n = sizeof(arr) / sizeof(int);
        //     printArr(arr, n);


    //....
    // int main() {
    //     // int a = 5; 

    //     int arr[20] = {1, 2, 3, 4, 5, 6};
    //     int *ptr1 = arr; // 
    //     int *ptr2 = ptr1 + 3; //4

    //     cout<<*ptr2<<"\n"; 
    //     cout<<*ptr1<<"\n";

    //     cout<<ptr2 - ptr1<<"\n";

    //.........
    // int main() {
    //     int arr[20] = {1, 3, 4, 5, 6};
    //     int *ptr1 = arr;
    //     int *ptr2 = ptr1 + 3;

    //     cout<<(ptr1 == arr) << "\n"; //Yes : true : 1
        return 0;
}