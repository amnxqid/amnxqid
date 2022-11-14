#include <iostream>
using namespace std;

int main()
{
	int number, counter = 0;
	for (counter = 0; counter < 100; counter++)
	{
		cout << "Enter any number"<<endl;
		cin >> number;

		cout << "The answer is ";
		cout << sqrt(number) << endl << endl;
	}
	return 0;
}