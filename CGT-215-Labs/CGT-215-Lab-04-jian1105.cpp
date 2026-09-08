//#include <iostream>
//
//using namespace std;
//
//void printMenu() {
//	cout << "Please Select which operation to perform:" << endl;
//	cout << "\t1. Factorial" << endl;
//	cout << "\t2. Arithmetic Series" << endl;
//	cout << "\t3. Geometric Series" << endl;
//	cout << "\t4. Exit" << endl;
//	cout << "Your Selection: ";
//}
//
//void factorial() {
//	int n = 0;
//
//	cout << "Factorial:" << endl;
//	cout << "Enter a number: ";
//	cin >> n;
//	if (n < 1) {
//		do {
//			cout << "Please enter a valid number: ";
//			cin >> n;
//		} while (n < 1);
//	}
//
//	int v = 1;
//
//	cout << n << "! = 1";
//	for (int i = 2; i < n + 1; i++) {
//		cout << " * " << i;
//		v *= i;
//	}
//	cout << " = " << v << endl;
//	
//}
//
//void arithmetic() {
//	int a, s, n;
//	cout << "Arithmetic Series:" << endl;
//	
//	cout << "Enter a number to start at: ";
//	cin >> a;
//
//	cout << "Enter a number to add each time: ";
//	cin >> s;
//
//	cout << "Enter the number of elements in the series: ";
//	cin >> n;
//
//	int v = 0;
//
//	for (int i = 0; i < n; i++) {
//		v += a;
//		if (i != 0)
//			cout << " + ";
//		cout << a;
//		a += s;
//	}
//	cout << " = " << v << endl;
//}
//
//void geometric() {
//	int a, r, n;
//	cout << "Geometric Series:" << endl;
//
//	cout << "Enter a number to start at: ";
//	cin >> a;
//
//	cout << "Enter a number to multiply each time: ";
//	cin >> r;
//
//	cout << "Enter the number of elements in the series: ";
//	cin >> n;
//
//	int v = 0;
//
//	for (int i = 0; i < n; i++) {
//		v += a;
//		if (i != 0)
//			cout << " + ";
//		cout << a;
//		a *= r;
//	}
//	cout << " = " << v << endl;
//}
//
//int main() {
//	int choice;
//	char again;
//
//	do {
//		printMenu();
//		cin >> choice;
//
//		if (choice > 3 || choice < 1) {
//			return 0;
//		}
//		else if (choice == 1)
//			factorial();
//		else if (choice == 2)
//			arithmetic();
//		else if (choice == 3)
//			geometric();
//
//		cout << "Go Again? [Y/N]";
//		cin >> again;
//	} while (again == 'y' || again == 'Y');
//}