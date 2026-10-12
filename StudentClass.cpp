#include<iostream>
#include<string>
using namespace std;
class Student{
  private:
     string id;
     string name;
     float marks;
  public:

    void getData()
    {
        cout<<"Enter Student ID: ";
        getline(cin, id);
        cout<<"Enter Student Name: ";
        getline(cin, name);
        cout<<"Enter marks: ";
        cin>>marks;

        while(marks<0 || marks >100)
        {
            cout<<"Invalid marks. Please Enter marks (0-100): ";
            cin>>marks;
        }
    }

    char calculateGrades();

    void displayData()
      {
        cout<<"\n\n--------------------Student Details--------------------"<<endl;
        cout<<"Student ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grades: "<<calculateGrades()<<endl;

      }


};

char Student::calculateGrades()
{
    if(marks>=80)
    return 'A';

    else if(marks>=60)
    return 'B';

    else if(marks>=40)
    return 'C';

    else if(marks>=20)
    return 'D';
    
    else 
    return 'F';
}

int main()
{
    
    Student s1;
    s1.getData();
    s1.displayData();
    return 0;
}