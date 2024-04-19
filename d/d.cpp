#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}


int main() {

	int num1 = 5, num2 = 3;
	cout << "Sum of numbers " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;

	return 0;
}



#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {

	int n = 6;
	cout << "Factorial of " << n << " is: " << factorial(n) << endl;

	return 0;
}


#include <iostream>
#include <string>

using namespace std;


int stringLength(string str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		length++;
	}
	return length;
}

int main() {

	string str = "Hello, World!";
	cout << "Length of the string \"" << str << "\" is: " << stringLength(str) << endl;

	return 0;
}