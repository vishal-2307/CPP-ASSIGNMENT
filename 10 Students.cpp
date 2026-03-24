#include <iostream>
using namespace std;

class student
{
private:
    int Rollno;
    string Name;
    string Div;
    string dept;

public:
    void getInfo() // funtion decalration 
    {
        cout << "Enter Roll no:" << endl;
        cin >> Rollno;

        cout << "Enter a Student name:" << endl;
        cin >> Name;

        cout << "Enter a Division:" << endl;
        cin >> Div;

        cout << "Enter a dept:" << endl;
        cin >> dept;
    }

public:
    void showInfo()
    {
        cout << "Roll no of the student" << Rollno << endl;
        cout << "student name" << Name << endl;
        cout << "Division of student" << Div << endl;
        cout << "Dept of student" << dept << endl;
    }
};

int main()
{
    student object[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Information of student" << i + 1;
        object[i].getInfo();
     
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Display Information of student" << i + 1;
        object[i].showInfo();
        
    }

    

    
}