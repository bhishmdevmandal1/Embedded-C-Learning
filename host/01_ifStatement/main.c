#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int age = 0;
	printf("Enter your age :");
	scanf("%d",&age);


	if(age < 18){
		printf("Sorry ! you are not eligible to Vote\n");
	}

	if(age >= 18){
		printf("Congrats ! you are eligible to vote\n");
	}

	printf("Press enter key to exit this application\n");

	while(getchar() != '\n')
	{
		//just read the input buffer & do nothing(for command prompt)
	}
	getchar();
}



