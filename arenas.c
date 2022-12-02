#include <stdio.h>


int main()
{
	//This version has inputs!!!
	int a;
	scanf("%i", &a);
	if (a < 1)
		printf("Invalid number!");
	for (int i = 0; i < a; i++)
		printf("Arena %i\n", i + 1);
	return 0;
}
