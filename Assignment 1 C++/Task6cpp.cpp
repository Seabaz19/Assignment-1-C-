// n prime numbers to display
#include <iostream>
using namespace std;

int main()
{
	int i,n,num;
	
	cout << "Enter howmany prime numbe are desired:" << endl;
	cin >> n;

	for (num = 0; num <= n; num++)
	{
		for (i = 2; i <= num/2; i++)//check if a number is prime and print it
		{
			if (n%i == 0)
			{
					cout << n << endl;
				
			}
		}
	}

	return 0;
}