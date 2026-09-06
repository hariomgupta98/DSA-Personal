#include<iostream>
using namespace std;
class Student{
    string name;
    float cgpa;

public:
    void getPercentage() {
        cout<<(cgpa*10)<<"%\n";
    }

    //Setter
    void setName(string nameVal) {
        name = nameVal;
    }
    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal;
    }

    //Getter
    string getName() {
        return name;
    }
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;
    s1.setName("Harshito");
    s1.setCgpa(9.2);
    
    cout<<"Your name is: "<<s1.getName()<<endl;
    cout<<"Your cgpa is: "<<s1.getCgpa()<<endl;
    return 0;
}