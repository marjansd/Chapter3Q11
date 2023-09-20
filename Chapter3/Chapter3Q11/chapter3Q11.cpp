#include <iostream>
#include <string>
#include "GradeBook.h"  //include definition of class GradeBook
using namespace std;

GradeBook::GradeBook( string name1, string  name2)
        :CourseName(name1), InstructorName(name2)
{

}


void GradeBook ::setNames(string name1, string name2)
{
    CourseName=name1;
    InstructorName=name2;

}
string GradeBook::getNames() const
{
    return CourseName+ ""+InstructorName;
}


void GradeBook::displayMessage() const
{
    cout<<"welcome to the GradeBook for \n"<<getNames()<<endl;
}

