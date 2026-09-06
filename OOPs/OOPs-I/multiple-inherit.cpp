#include<iostream>
using namespace std;

class Teacher {
public:
   int salary;
   string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student{
public:
    string name;
};

int main() {
    TA ta1;
    ta1.name = "Hariom Gupta";
    ta1.subject = "C++";
    ta1.cgpa = 9.2;

    cout<<"Your name is: "<<ta1.name<<endl;
    cout<<"Your subject is: "<<ta1.subject<<endl;
    cout<<"Your cgpa is: "<<ta1.cgpa<<endl;
    return 0;
}

