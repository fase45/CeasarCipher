#include <stdio.h>
#include <string>

// Declare and Define
int saySomething(int option)
{

	printf("\nWe just said something\n\n");
	return 12;
}


int returnType;


int  main()
{
	while(1)
	{
		printf("Hello World\n");

		returnType = saySomething(); // Call the Function
		printf("returnType is integer: %d \n", returnType);
	}

	return 0;
}


// Define the Function
