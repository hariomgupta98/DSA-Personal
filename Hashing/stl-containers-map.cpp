#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    map<string, int> m;
    m["India"] = 150;
    m["Nepal"] = 150;
    m["USA"] = 50;
    m["China"] = 20;
    
    for(pair<string, int> country : m){
        cout<<country.first<<", "<<country.second<<endl;
    }

    m.erase("Nepal");
    if(m.count("Nepal")){
        cout<<"Nepal exists\n";
    }else{
        cout<<"Nepal doesn't exists\n";
    }
    return 0;
}