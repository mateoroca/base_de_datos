#include "../include/attendanceManagement.h"




void AttendanceManagement::takeAttendance(Student*student,Course*course,string datetime ,bool state)
{
    ofstream file ;
    file.open("attendance.csv");
    
    if(file.is_open())
    
    {
    file << student->getName()      << ","
         << student->getSurname()   << ","
         << student->getIdentifier()<< ","
         << course->getName()       << ","
         << course->getIdentifier() << ","
         << datetime                << ","
         << state                   << ","
         << endl;

         file.close();
     }

    else
    {
       cout << "error the file couldn't be opened";
    }
}

void AttendanceManagement::showAttendance()
{
    ifstream file;
    string data;

    file.open("attendance.csv");
    
    if(file.is_open())
    {
        while(!file.eof())
        {
        getline(file,data);

        cout << data << endl;
        }
        file.close();
        
    }

    else
    {
        cout << "error the file couldn't be opened";
    }

}



AttendanceManagement::AttendanceManagement()
{
    
}

AttendanceManagement::~AttendanceManagement()
{
    
}
