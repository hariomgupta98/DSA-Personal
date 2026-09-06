#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string, int> m;
    m["China"] = 150;
    m["India"] = 150;
    m["US"] = 50;
    m["Nepal"] = 10;

    //override
    m["Nepal"] = 200;

    //key, value
    for(pair<string, int> country : m){
        cout<<country.first <<","<<country.second<<endl;
    }

    //erase
    m.erase("Nepal");

    //count->0, 1
    if(m.count("Nepal")){
        cout<<"Nepal exist\n";
    }else{
        cout<<"Nepal dosen't exist\n";
    }
    return 0;
}