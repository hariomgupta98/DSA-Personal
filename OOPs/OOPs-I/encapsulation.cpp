#include<iostream>
using namespace std;
class Student{
private:
    int age;
public:
    void setAge(int a){
        if(a>0) age = a;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Student s;
    s.setAge(20);
    cout<<s.getAge();
}