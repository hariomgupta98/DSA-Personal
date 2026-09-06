#include<iostream>
using namespace std;
int main(){
    int n; 
    do{
        cout<<"Enter a number if divisiable by 10: ";
        cin>>n;
        if(n%10 == 0) {
            break;
        }

        cout<<"Your are enter wrong number, please try again"<<endl;
    } while(true);

    return 0;
}