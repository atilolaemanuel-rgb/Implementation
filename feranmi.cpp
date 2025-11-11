#include <iostream>
#include <string>
using namespace std;

int main()
{
    //sutdent data
    int sutdent_id = 21;
    int sutdent_age = 11;
    float studentfee = 1500.75;
    char studentgrade = 'A';
    bool isfulltime = true;
    string studentname = "Feranmi";

    //print student data
    cout << "Student ID: " << sutdent_id << endl;
    cout << "Student Age: " << sutdent_age << endl;
    cout << "Student Fee: $" << studentfee << endl;
    cout << "Student Grade: " << studentgrade << endl;
    cout << "Is Full Time: " << (isfulltime ? "Yes" : "No") << endl;
    cout << "Student Name: " << studentname << endl;

    return 0;
} 


   