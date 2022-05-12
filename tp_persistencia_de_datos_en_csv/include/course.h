#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    int identifier;
    string name;
public:
    Course();
    ~Course();
    void setIdentifier(int);
    void setName(string);
    int getIdentifier();
    string getName();
};

#endif // __COURSE_H__