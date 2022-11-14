#include <iostream>
using namespace std;

int main()
{
	int counter = 0;
	while (counter < 100)
	{
		int number;

		cout << "Enter any number" << endl;
		cin >> number;

		cout << "The answer is ";
		cout << sqrt(number) << endl << endl;

		counter++;

	}

	return 0;
}
