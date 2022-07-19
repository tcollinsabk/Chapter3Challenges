#include <iostream>
using namespace std;

int main()
{
	int num = -1;

	while (num < 0)
	{
		cout << "Enter a number greater than zero to determine its factors: ";
		cin >> num;
	}

	cout << "The factors of " << num << " are: " << endl;

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}