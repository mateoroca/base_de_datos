#ifndef ATTENDANCEMANAGEMENT_H
#define ATTENDANCEMANAGEMENT_H

#include <string>
#include <fstream>
#include <iomanip>
#include "./student.h"
#include "./course.h"



class AttendanceManagement
{   
public:
    AttendanceManagement();
    ~AttendanceManagement();
    
   void  takeAttendance(Student*student,Course*course,string datetime ,bool state);
   void showAttendance();

};



#endif // __ATTENDANCEMANAGEMENT_H__