//TEE2101 Programming Methodology 
//Lab 1 Question 1

#include <stdio.h>
#include <string.h>



int main()
{
	int integer;
	double first_floating_point, second_floating_point;
	char string1[20] = "", string2[6] = "-Audi";
	
	
	printf("Enter Integer:\n");
	scanf_s("%d", &integer);

	printf("Enter First Floating Point:\n");
	scanf_s("%lf", &first_floating_point);

	printf("Enter Second Floating Point:\n");
	scanf_s("%lf", &second_floating_point);

	printf("Enter string:\n");
	scanf_s("%s", &string1, sizeof(string1) - sizeof(string2)); //allocate sufficient memory for string 2 to be appended later 
	
	strcat_s(string1, sizeof(string1), string2); //append second string to the end of first string.
	
	
	printf("\nOutput:\n\nInteger: %d\nFirst Floating Point: %lf\nSecond Floating Point: %.5lf\nString: %s\n", integer, first_floating_point, second_floating_point / 1000.0, string1);
	
	getchar();
	getchar();
	return 0;
}
