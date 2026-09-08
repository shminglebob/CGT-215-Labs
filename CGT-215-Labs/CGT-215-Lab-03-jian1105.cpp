#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "3. Division" << endl;
	
	cout << "\nYour Selection : ";
	cin >> choice;
}

void getChoices(float& a, float& b) {
	cout << "Please enter the first value: ";
	cin >> a;

	cout << "Please enter the second value: ";
	cin >> b;
}

void sum(float a, float b) {
	cout << endl << a << " + " << b << " = " << a + b;
}

void difference(float a, float b) {
	cout << endl << a << " - " << b << " = " << a - b;
}

void product(float a, float b) {
	cout << endl << a << " * " << b << " = " << a * b;
}

void quotient(float a, float b) {
	cout << endl << a << " / " << b << " = " << a / b;
}

int main() {
	int choice;
	float a, b;

	printMenu(choice);
	getChoices(a, b);

	if (choice == 1)
		sum(a, b);
	if (choice == 2)
		difference(a, b);
	if (choice == 3)
		product(a, b);
	if (choice == 4)
		quotient(a, b);
	
	return 0;
}