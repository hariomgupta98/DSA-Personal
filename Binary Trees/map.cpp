#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int, string> m; //creating a map
    m[110] = "Rahul"; //insert in a map
    m[101] = "Rajat";
    m[131] = "Neha";

    m[110] = "Debug";
    cout<<m[110]<<endl; // access val using key

    cout<<m.count(101)<<endl; //1 if key is present, 0 if key is not present

    for(auto it : m){ //loop on map  
        cout<<"Key = "<<it.first<< " , " <<"Value = "<<it.second<<"\n";
        // cout<<"Double = "<<it.first * 2 <<endl; //operation perfom
    }
    return 0;
}