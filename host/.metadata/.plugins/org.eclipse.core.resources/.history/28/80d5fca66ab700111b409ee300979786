#include<stdio.h>
#include<stdint.h>

int main(void)
{
	float num1, num2;
	printf("Enter the first number (integer) :");
	scanf("%f",&num1);

	printf("Enter the second number (integer) :");
	scanf("%f",&num2);

	int32_t n1, n2;
	// we are storing only integer part of the real number
	n1 = num1;
	n2 = num2;
	if((n1 != num1) || (n2 != num2)){
		printf("Warning ! comparinng only integer\n");
	}


	if(n1 == n2){
		printf("Number is equal\n");
	}else{

		if(num1 < num2){
			printf("Heyy' %d is bigger\n",n2);
		}else{
			printf("Heyy' %d is bigger\n",n1);
		}
	}

	printf("Press enter key to exit this application\n");

	while(getchar() != '\n')
	{
		//just read the input buffer & do nothing(for command prompt)
	}
	getchar();

}
