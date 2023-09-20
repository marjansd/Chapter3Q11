//(Modifying Class GradeBook) Modify class GradeBook (Figs. 3.11–3.12) as follows:
//a) Include a second string data member that represents the course instructor’s name.
//b) Provide a set function to change the instructor’s name and a get function to retrieve it.
//c) Modify the constructor to specify course name and instructor name parameters.
//d) Modify function displayMessage to output the welcome message and course name,
//then the string "This course is presented by: " followed by the instructor’s name.
//Use your modified class in a test program that demonstrates the class’s new capabilities.

#include<string>
using namespace std;

class  GradeBook {
public:
    //constructor
    GradeBook(string name1, string name2) {
        CourseName = name1;
        InstructorName = name2;
    }

    //set function and get function
    void setNames(string name1, string name2); //set the course name and instructor name
    string getNames() const {
        return CourseName +"  "+InstructorName;
    }

    void displayMessage() const;

private:
    string CourseName;
    string InstructorName;

    string getNames(string name1, string name2) const;
};










