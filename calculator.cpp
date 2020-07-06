#include <iostream>
using namespace std;

void calculator() {
	int first_num;
	cout << "enter the first number: ";
	cin >> first_num;

	char operation;
	cout << "enter the operation: ";
	cin >> operation;

	int second_num;
	cout << "enter the second number: ";
	cin >> second_num;

	string answer = "The answer is: ";

	int result_add = first_num + second_num;
	int result_sub = first_num - second_num;
	int result_mul = first_num * second_num;
	int result_div = first_num / second_num;

	switch(operation) {
		case '+':
			cout << answer << result_add;
			break;
		case '-':
			cout << answer << result_sub;
			break;
		case '*':
			cout << answer << result_mul;
			break;
		case '/':
			cout << answer << result_div;
			break;
		default:
			cout << "not a supported operation bruv";
	}
}

int main() {
	calculator();
}
