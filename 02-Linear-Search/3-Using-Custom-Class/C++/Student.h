#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class Student
{
private:
    string name;
public:
    Student(const string& new_name):name(new_name){}
    bool operator==(const Student& stu) const{
        if(this == &stu){
            return true;
        }
        if(typeid (*this) != typeid (stu)){
            return false;
        }
        return (name.compare(stu.name) == 0);
    }
};

#endif // STUDENT_H
