#include<iostream>
using namespace std;
int main(){
    //------------>break
    int i = 1;
    while(i<=10) {
        if(i==3) {
            break;
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"Out of the loop"<<endl;
    return 0;

}