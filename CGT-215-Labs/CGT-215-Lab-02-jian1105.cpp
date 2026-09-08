#include <iostream>

using namespace std;

int main() {
	float a, b;
	cout << "ax + b = 0" << endl << "for x" << endl;

	cout << "Please enter a value for a: ";
	cin >> a;

	cout << "Please enter a value for b: ";
	cin >> b;

	cout << "Solving " << a << "x + " << b << " = 0 for x..." << endl;

	float x = -b / a;

	cout << "The answer is:" << endl << "x = " << x;
}