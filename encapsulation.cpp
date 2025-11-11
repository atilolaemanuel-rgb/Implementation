#include <iostream>
using namespace std;

class Enployee {
private:
//private attributes
int salary;

public:
void setSalary(int s) {
    salary = s;
}

int getSalary() {
    return salary;
   }
};
int main() {
    Enployee emp;
    emp.setSalary(50000);
    cout << "Employee Salary: $" << emp.getSalary() << endl;
    return 0;
}