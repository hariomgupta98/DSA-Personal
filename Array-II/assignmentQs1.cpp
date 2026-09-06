#include<iostream>
using namespace std;

//->Contain Duplicate
#include<algorithm>
using namespace std;

void containsDuplicate(int arr[], int n) {
    sort(arr, arr+n);
    for(int i=0; i<n; i++) {
        if(arr[i] == arr[i-1]) {
            cout<<"Finally it is true.\n";
             return;
        }
    }
    cout<<"Sorry it is false.\n";
}
int main() {
    int arr[] = {1, 3, 3, 7};
    int n = sizeof(arr) / sizeof(int) ;
    containsDuplicate(arr, n);
    return 0;
}
    