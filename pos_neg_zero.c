#include <stdio.h>

int main(void)
{
	int num = 0;

	//now lets get that number to test
	printf("Enter a number: ");
	scanf("%d", &num);

	// now lets make a if to check for positive, negitive, or zero
	if (num > 0) {
		printf("M1: [%d] is positive. \n", num);
	}
	if (num < 0) {
		printf("M1: [%d] is a negative number: \n", num);
	}
	if (num == 0) {
		printf("M1: [%d] is zero. \n", num);
	}

	//telling what loop it went threw
	printf("Just went through if loop. \n");
	
	
	//using the if else only

	if (num <= 0) {
		if (num == 0) 
			printf("M2: [%d] is zero. \n", num);
		else
			printf("M2: [%d] is a negative number: \n", num);
			
	}
	else
	{
		printf("M2: [%d] is positive. \n", num);
	}

	//telling what loop it went threw
	printf("Just went through if else loop. \n");

	//Now lets do an else if loop

	if (num > 0) {
		printf("M3: [%d] is positive. \n", num);
	}
	else if (num < 0) {
		printf("M3: [%d] is a negative number: \n", num);
	}
	else if (num == 0 ) {
		printf("M3: [%d] is zero. \n", num);
	}


	//telling what loop it went threw
	printf("Just went through else if loop. \n");

	return 0;
}
