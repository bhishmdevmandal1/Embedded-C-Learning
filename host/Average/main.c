#include <stdio.h>

int main(void)
{
	double number1, number2, number3;
	double average;

	/*printf("Enter the first number: ");
	fflush(stdout);
	scanf("%lf",&number1);

	printf("\nEnter the second number: ");
	fflush(stdout);
	scanf("%lf",&number2);

	printf("\nEnter the third number: ");
	fflush(stdout);
	scanf("%lf",&number3); */

	printf("Enter 3 Numbers: \n");
	fflush(stdout);
	scanf("%lf %lf %lf",&number1,&number2,&number3);

	average = (number1+number2+number3) / 3;
	printf("\nAverage = %lf\n",average);

	printf("\nPress enter key to exit the application"); //For command prompt (.exe file)
	while(getchar() != '\n')							//To make your application, to wait until the user presses a key from the keyboard. (for hanging the program)
	{

	}
	getchar();

}
