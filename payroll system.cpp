#include <iostream>
#include <string>
using namespace std;

// Structure to store employee details
struct Employee
{
    int empID;
    string name;
    double basicSalary;
    double hra;
    double da;
    double tax;
    double grossSalary;
    double netSalary;
};

// Function to calculate salary
void calculateSalary(Employee &e)
{
    e.hra = 0.20 * e.basicSalary;      // 20% HRA
    e.da = 0.10 * e.basicSalary;       // 10% DA
    e.grossSalary = e.basicSalary + e.hra + e.da;
    e.tax = 0.05 * e.grossSalary;      // 5% Tax
    e.netSalary = e.grossSalary - e.tax;
}

// Function to display details
void displayEmployee(Employee e)
{
    cout << "\n------ Employee Payroll ------" << endl;
    cout << "Employee ID   : " << e.empID << endl;
    cout << "Employee Name : " << e.name << endl;
    cout << "Basic Salary  : " << e.basicSalary << endl;
    cout << "HRA (20%)     : " << e.hra << endl;
    cout << "DA (10%)      : " << e.da << endl;
    cout << "Gross Salary  : " << e.grossSalary << endl;
    cout << "Tax (5%)      : " << e.tax << endl;
    cout << "Net Salary    : " << e.netSalary << endl;
}

int main()
{
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.empID;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, emp.name);

    cout << "Enter Basic Salary: ";
    cin >> emp.basicSalary;

    calculateSalary(emp);

    displayEmployee(emp);

    return 0;
}