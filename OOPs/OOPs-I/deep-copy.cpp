#include<iostream>
using namespace std;
class Student{
public:
    int* marks;
    Student(int m){
        marks = new int(m);
    }
    Student(const Student &s){
        marks = new int(*(s.marks));
    }
    void show(){
        cout<<"Marks: "<<*marks<<endl;
    }
};
int main(){
    Student s1(90);
    Student s2 = s1;
    *s2.marks = 50;
    s1.show();
    s2.show();
}