#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintNumberPattern(int Number)
{

	for (int i = 1; i <= Number; i++)
	{
		cout << "\n";

		for (int j = i; j >= 1; j--)
		{
			cout << i;
		}

	}
	cout << "\n";
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Enter a positive number"));
}
