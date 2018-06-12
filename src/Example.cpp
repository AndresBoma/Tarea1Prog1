#include "Example.h"
#include <string>
using namespace std;

Example::Example()
{

}

Example::~Example()
{
    //dtor
}

void Example::setEmployeeId(long n){
    employeeId = n;
}
void Example::setName(string n){
    name = n;
}
void Example::setWorkedMonths(int n){
    workedMonths = n;
}
void Example::setSalaryByMonth(double n, int index){
    salaryByMonth[index] = n;
}
void Example::setOvertimeByMonth(double n, int index){
    overtimeByMonth[index] = n;
}
void Example::setBonusesByMonth(double n, int index){
    bonusesByMonth[index] = n;
}

long Example::getEmployeeId(){
    return employeeId;
}
string Example::getName(){
    return name;
}
int Example::getWorkedMonths(){
    return workedMonths;
}
double Example::getSalaryByMonth(int index){
    return salaryByMonth[index];
}
double Example::getOvertimeByMonth(int index){
    return overtimeByMonth[index];
}
double Example::getBonusesByMonth(int index){
    return bonusesByMonth[index];
}
