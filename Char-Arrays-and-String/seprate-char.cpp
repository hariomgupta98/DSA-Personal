#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello Sir";
    for(char ch : str){
        cout<<ch<<" . ";
    }
    cout<<endl;
    return 0;
}