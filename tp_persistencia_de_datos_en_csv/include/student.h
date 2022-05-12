#ifndef STUDENT_H
#define STUDENT_H

#include <string.h>
#include <iostream>
using namespace std;


class Student
{
private:
    int identifier;
    string name;
    string surname;
public:
    Student();
    ~Student();
    void setIdentifier(int);
    void setName(string);
    void setSurname(string);
    int getIdentifier();
    string getName();
    string getSurname();
    
};


#endif // __STUDENT_H__