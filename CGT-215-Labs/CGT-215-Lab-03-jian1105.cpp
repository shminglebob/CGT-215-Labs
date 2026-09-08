#include <iostream>
using namespace std;

int get_int() {
	int v;
	cin >> v;
	return v;
}

char get_char() {
	char c;
	cin >> c;
	return c;
}

void print_float(float num) {
	cout << num;
}

void print_str(string msg) {
	cout << msg;
}

int main() {
	print_str("Input your numbers:\n");
	int a = get_int();
	int b = get_int();

	print_str("Input operation:\n");
	char oper = get_char();

	if (oper == '+')
		print_float(a + b);
	else if (oper == '-')
		print_float(a - b);
	else if (oper == '*')
		print_float(a * b);
	else if (oper == '/')
		print_float(a / b);
	else
		print_str("not a valid operation.");

	return 0;
}