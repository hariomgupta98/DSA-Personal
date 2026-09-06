#include<iostream>
using namespace std;

class User {
private:
    int id; 
    string password;
public:
    string username;
    User(int id) {
        this->id = id;
    }
// getter
string getPassword(){
    return password;
}
// setter 
void setPassword(string password) {
    this->password = password;
}
};

int main() {
    User user1(101);
    user1.username = "gupta";
    user1.setPassword("DSA");

    cout<<"Your user id: "<<user1.username<<endl;
    cout<<"Your password: "<<user1.getPassword()<<endl;
    return 0;
}