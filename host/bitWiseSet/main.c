#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int32_t num1, output;

	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&num1);

	output = num1 | 0x90;
	printf("[input] [output] :0x%x 0x%x\n",num1, output );

	wait_for_user_input();
}

void wait_for_user_input(void)
	{
		printf("Press enter key to exit this application\n");
		fflush(stdout);
		while(getchar() != '\n')
		{
		  //just read the input buffer & do nothing(for command prompt)
		}
		getchar();
	}
