#include<iostream>
using namespace std;

class Student{
public:
    string name;
    float cgpa;

    void getPercentage() {
        cout<<(cgpa*10)<<"% \n";
    }
};
int main() {
    Student s1;
    s1.name = "Harshito";
    s1.cgpa = 9.0;

    cout<<"Your name is: "<<s1.name<<endl;
    cout<<"Your cgpa is: "<<s1.cgpa<<endl;
    cout<<"With percentage: ";
    s1.getPercentage();
    return 0;
}