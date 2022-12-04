#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char inp, alphabet = 'A';

	printf("Enter number or uppercase letter: ");
	cin >> inp;

	if (int(inp) >= 65 && int(inp) <= 90) // check if input is an uppercase letter then perform pyramid
	{
		for (int i = 1; i <= (inp - 'A' + 1); ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << alphabet << " ";
			}
			++alphabet;

			cout << endl;
		}
	}

	if (isdigit(inp) == 4) // check if input is number then perform pyramid (4 is the value for true)
	{
		for (int i = 1; i <= inp-48; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << j << " ";
			}
			printf("\n");
		}
	}

	else
	{
		printf("output must be a number or uppercase letter");
	}
	


}