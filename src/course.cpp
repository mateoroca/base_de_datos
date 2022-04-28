
#include "..\include\Course.h"


Course::Course()
{
    
}

Course::~Course()
{
    
}

void Course::setIdentifier(int indent)
{
    this->identifier = indent;
}

void Course::setName(string Nombre)
{
    this->name = Nombre;
}

int Course::getIdentifier()
{
    return identifier;
}

string Course::getName()
{
    return name;
}


