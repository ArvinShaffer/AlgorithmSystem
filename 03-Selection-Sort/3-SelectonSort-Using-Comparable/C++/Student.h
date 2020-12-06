#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int score;
    friend ostream& operator<<(ostream& os, const Student& student);
public:
    Student(const string& new_name, const int& new_score):name(new_name), score(new_score){}
    bool operator==(const Student& stu) const{
        if(this == &stu){
            return true;
        }
        if(typeid (*this) != typeid (stu)){
            return false;
        }
        return (name.compare(stu.name) == 0);
    }

    bool operator<(const Student& stu) const {
        return score < stu.score;
    }
};
ostream& operator<<(ostream& os, const Student& student)
{
    os << "Student(name: " << student.name << ", score: " << student.score << ")";
    return os;
}

#endif // STUDENT_H

