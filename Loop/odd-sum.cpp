#include<iostream>
using namespace std;
int main(){
    //odd sum add
    int n;
    cout<<"Enter odd number: ";
    cin>>n;
    int lastDigit;
    int sum = 0;
    while(n>0) {
        lastDigit = n%10;
        if(lastDigit % 2 != 0) {
            sum += lastDigit;
        }
        n = n/10;
    }
    cout<<"The odd sum of digit of number: "<<sum<<endl;
    return 0;
}