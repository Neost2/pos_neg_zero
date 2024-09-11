#include <stdio.h>

int main(void)
{
	int num = o;

	//now lets get that number to test
	printf("Enter a number: ");
	scanf("%d", &num);

	// now lets make a if to check for positive, negitive, or zero
	if (num > 0) {
		printf("M1: [%d] is positive. \n");
	}
	if (num < 0) {
		printf("M1: %d is a negative number: \n");
	}
	if (num == 0) {
		printf("M1: %d is zero. \n");
	}

	//telling what loop it went threw
	printf("Just went through if loop. \n");
	
	
	//using the if else only

	if (num <= 0) {
		if (num == 0) 
			printf("M1: %d is zero. \n");
		else
			printf("M1: %d is a negative number: \n");
			
	}
	else
	{
		printf("M1: [%d] is positive. \n");
	}

	//telling what loop it went threw
	printf("Just went through if else loop. \n");

	//Now lets do an else if loop

	if (num > 0) {
		printf("M1: [%d] is positive. \n");
	}
	else if (num < 0) {
		tf("M1: %d is a negative number: \n");
	}
	else if (num++ 0) {
		printf("M1: %d is zero. \n");
	}


	//telling what loop it went threw
	printf("Just went through else if loop. \n");

	return 0;
}