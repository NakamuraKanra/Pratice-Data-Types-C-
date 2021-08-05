#include <iostream>
using namespace std;

int main()
{
	double annualSalary;
	cout << "Please enter your annual Salary ";
	cin >> annualSalary;
	double monthlySalary = annualSalary / 12;
	cout << "your monthly salary is " << monthlySalary << endl;
	cout << "In 10 years you will earn " << annualSalary * 10;
	system("pause>0");
}

