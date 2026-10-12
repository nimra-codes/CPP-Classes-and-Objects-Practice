
#include <iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    double bonus;
    string bonusPercentage;

public:

  void employeedata();

    // Calculate salary with bonus
    double calculateSalary() {
        return salary + bonus;
    }

    // Display employee details
    void display() {
        cout << "\n\nEmployee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus<<"("<<bonusPercentage<<")" << endl;
        cout << "Total Salary with Bonus: " << calculateSalary() << endl;
    }
};

void Employee::employeedata()
{
    cout<<"\n\nEmter Employee Name: ";
    getline(cin, name);
    cout<<"Enter Employee salary: ";
    cin>>salary;

    // Bonus 
    if(salary>=50000)
    {
        bonus = (salary*(10.0/100));
        bonusPercentage = "10%";
    }
     else if(salary>=30000)
    {
        bonus = (salary*(7.0/100));
         bonusPercentage = "7%";
    }
     else if(salary>=15000)
    {
        bonus = (salary*(5.0/100));
         bonusPercentage = "5%";
    }
    else{
        bonus = 0;
        bonusPercentage = "0%";
    }
}

int main() {
    Employee e1;
    e1.employeedata();
    e1.display();
   
    return 0;
}