// n prime numbers to display
#include <iostream>
using namespace std;

int main()
{
	int i,n;
	
	cout << "Enter howmany prime numbe are desired:" << endl;
	cin >> n;

	for (i=2; i<=n/2; i++)//check if a number is prime and print it
	{
		if (n% i = 0)
		{
			if (n % i == 0)
			{
				cout << n << endl;
			}
		}
	}

	return 0;
}