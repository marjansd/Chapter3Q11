#include<iostream>
#include "GradeBook.h"
using namespace std;

int main() {
    GradeBook gradeBook1("C01 introduction to Programing 1", " Saadati");
    cout << " The course name and it instructor is " << gradeBook1.getNames() << endl;
    gradeBook1.displayMessage();
    gradeBook1.setNames("how to write c++ code", "marjan");

    GradeBook gradeBook2("c02 advanced python", "alaverdi");
    cout << "The course name and its instructor is " << gradeBook2.getNames() << endl;
    gradeBook2.displayMessage();
    gradeBook2.setNames("How to get perfect in c++", "sebastian");
}


