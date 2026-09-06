#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0; 
    cout<<"Input limit: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Sum of "<< n<<" numbers is: "<<sum<<endl;
}