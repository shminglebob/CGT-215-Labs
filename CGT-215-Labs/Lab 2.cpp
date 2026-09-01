#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Input your numbers:\n";
	cin >> a;
	cin >> b;

	char oper;
	cout << "Input operation:\n";
	cin >> oper;

	switch (oper) {
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '*':
			cout << a * b;
			break;
		case '/':
			cout << (float) a / (float) b;
			break;
	}

	return 0;
}
