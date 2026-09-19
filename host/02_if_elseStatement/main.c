

#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int32_t num1 , num2;

	printf("Enter the first number(integer):\n");
	scanf("%d",&num1);

	printf("Enter the second number(integer):\n");
	scanf("%d",&num2);

	if(num1 == num2){
		printf("Numbers are equal\n");
	}else{

		if(num1 < num2){
			printf("Heyy' %d is bigger\n",num2);
		}else{
			printf("Heyy' %d is bigger\n",num1);
		}
	}



	printf("Press enter key to exit this application\n");

		while(getchar() != '\n')
		{
			//just read the input buffer & do nothing(for command prompt)
		}
		getchar();

}








