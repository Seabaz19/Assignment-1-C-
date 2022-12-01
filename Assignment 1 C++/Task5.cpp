#include <stdio.h>
using namespace std;


int main()
{
	char N;
	int A;
	char G;
	char adrs;
	char M;
	float H;

	printf("Name:");
	scanf(N);
	printf("Age:");
	scanf(A);
	printf("Gender (male/female):");
	scanf(G);
	printf("Address:");
	scanf(adrs);
	printf("Married (yes/no):");
	scanf(M);
	printf("Height (meters):");
	scanf(H);

	printf("Name:", N);
	printf("Age:", A);
	printf("Gender (male/female):", G);
	printf("Address:", adrs);
	if (M == "yes")
	{
		printf("Married (yes/no): yes");
	}
	else {
		printf("Married (yes/no): no");
	}
	printf("Height (meters):", H);

	return 0;
}