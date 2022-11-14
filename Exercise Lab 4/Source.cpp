#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
		if (num > 0)
		cout << "The number you entered is " << num << ", and this is positive number.";

		if (num == 0)
		cout << "The number you entered is " << num << ", and this is zero.";

		if (num < 0)
			cout << "The number you entered is " << num << ", and this is negatif number.";

	return 0;
}