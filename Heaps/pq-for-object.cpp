#include<bits/stdc++.h>
using namespace std;
class Student{ //"<" overloading
public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }
    bool operator < (const Student &obj) const{
        return this->name > obj.name;
    }
};
int main(){
    priority_queue<Student> pq;
    pq.push(Student("Aman", 85));
    pq.push(Student("Bhumika", 98));
    pq.push(Student("Chetan", 54));

    while(!pq.empty()){
        cout<<"Top = "<<pq.top().name<<" with rank "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}