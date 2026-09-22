#include<iostream>
#include<string>
using namespace std;
class Student
{
    int rollno;
    string name, result;
    float marks_subject1, marks_subject2, marks_subject3, total, percent;
        public:
        void acceptDetails()
        {
            cout << "Enter Student Roll No: ";
            cin>>rollno;
            cout << "Enter Student Name: ";
            cin>>name;
            cout << "Enter marks of Subject 1: ";
            cin>>marks_subject1;
            cout << "Enter marks of Subject 2: ";
            cin>>marks_subject2;
            cout << "Enter marks of Subject 3: ";
            cin>>marks_subject3;
        }
        void calculateResult()
        {
            total = marks_subject1 + marks_subject2 + marks_subject3;
            percent = (total/300)*100;
            if(percent > 60)
            { result = "First Class";}
            else if(percent > 50)
            { result = "Second Class";}
            else if(percent > 40)
            { result = "Pass";}
            else
            { result = "Fail";}
        }
        void displayInfo()
        {

            cout << " ---- Student Details ---- " << endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Name: " << name << endl;
            cout << "Marks of Subject 1: " << marks_subject1 << endl;
            cout << "Marks of Subject 2: " << marks_subject2 << endl;
            cout << "Marks of Subject 3: " << marks_subject3 << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Percentage: " << percent << endl;
            cout << "Result: " << result << endl;
            }
};
    int main()
{

    Student s1;
    s1. acceptDetails();
    s1. calculateResult();
    s1. displayInfo();
    return 0;

}