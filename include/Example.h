#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <string>
using namespace std;

class Example
{
    public:
        Example();
        virtual ~Example();

        void setEmployeeId(long n);
        void setName(string n);
        void setWorkedMonths(int n);
        void setSalaryByMonth(double n, int index);
        void setOvertimeByMonth(double n, int index);
        void setBonusesByMonth(double n, int index);

        long getEmployeeId();
        string getName();
        int getWorkedMonths();
        double getSalaryByMonth(int index);
        double getOvertimeByMonth(int index);
        double getBonusesByMonth(int index);

        addDoubleInVector();


    protected:

    private:
        long employeeId;
        string name;
        int workedMonths;
        double salaryByMonth[12];
        double overtimeByMonth[12];
        double bonusesByMonth[12];

};

#endif // EXAMPLE_H
