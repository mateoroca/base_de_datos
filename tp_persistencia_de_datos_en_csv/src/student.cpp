#include <iostream>

#include "..\include\Student.h"


Student::Student()
{
}

Student::~Student()
{
    
}

void Student::setIdentifier(int ident)
{
    this->identifier = ident;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setSurname(string surname) 
{
    this->surname = surname;
}

int Student::getIdentifier()
{
    return this->identifier;
}

string Student::getName()
{
    return this->name;
}

string Student::getSurname()
{
    return this->surname;
}
