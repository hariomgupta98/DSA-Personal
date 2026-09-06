#include<bits/stdc++.h>
using namespace std;
bool palindromNum(int num) {
    int original = num;
    int reversed = 0;
    while(num>0) {
        int digit = num%10;
        reversed = reversed * 10 + digit;
        num = num/10;
    }
    return (original == reversed);
}
int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(palindromNum(num)) {
        cout<< num << " is a palindrom." <<endl;
    }else{
        cout<< num << " is not a palindrom."<<endl;
    }
return 0;
}