#include<iostream>
using namespace std;
int main() {
	double currentSalary;
	double incrementPercentage;
	double bonusPercentage;
	int exceptionalRating;
	int years;

	cout << "Enter the current salary of employee: " << endl;
	cin >> currentSalary;
	cout << "Enter the yearly increament percentage: " << endl;
	cin >> incrementPercentage;
	cout << "Enter the perfomance bonus percentage: " << endl;
	cin >> bonusPercentage;
	cout << "Enter the exceptional rating(1 for exceptional, 0 otherwise): " << endl;
	cin >> exceptionalRating;

	cout << "Enter the number of years: " << endl;
	cin >> years;

	for (int i = 1; i <= years; i++) {
		double incrementAmount = currentSalary * (bonusPercentage / 100);
		currentSalary = currentSalary + incrementAmount;

		if (exceptionalRating == 1) {
			double bonusAmount = currentSalary * (20 / 100);  //To provide a bonus of 2% or 0.20
			currentSalary = currentSalary + bonusAmount;
		}
		cout << "Salary after year " << i << " : PKR " << currentSalary << endl;
	}
	return 0;
}