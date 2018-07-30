#include<iostream>
#include<conio.h>
using namespace std;

void InverseStringTokens(char[]);

void main()
{
	const int SIZE = 80;
	char String[SIZE] = { 0 };

	cout << "Enter Values In A String:- ";
	cin.getline(String, SIZE, '\n');

	cout << endl << "Inverse String Tokens Are:- " << endl;
	InverseStringTokens(String);

	_getch();
}

void InverseStringTokens(char String[])
{
	int count = 0;
	for (int i = 0; String[i] != '\0'; i++)
	{
		++count;
	}

	for (int k = count; k >= 0; k--)
	{
		while (String[k] != ' ' && k != 0)
		{
			k--;
		}
		if (k != 0)
			count = k + 1;
		else
			count = k;
		while (String[count] != ' '&& String[count] != '\0')
		{
			cout << String[count];
			count++;
		}
		cout << endl;
	}
}