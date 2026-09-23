#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void)
{
	float num1, num2;
	int32_t n1, n2;
 while(1)
 {
    printf("Enter the first number : ");
    if ( scanf("%f",&num1) != 1 )
    {
        printf("Invalid input! Please enter a valid number.\n");
        while(getchar() != '\n');   // Buffer clear
        continue;
    }
     n1 = num1;
    if(n1 != num1)
    {
        printf("Warning! Please enter an integer only.\n");
        continue;
    }

        break;
 }

 while(1)
 {
    printf("Enter the second number : ");
    if ( scanf("%f",&num2) != 1 )
    {
        printf("Invalid input! Please enter a valid number.\n");
        while(getchar() != '\n');   // Buffer clear
        continue;
    }
     n2 = num2;
    if(n2 != num2)
    {
        printf("Warning! Please enter an integer only.\n");
        continue;
    }

        break;
 }

	if(n1 == n2)
	{
		printf("Number is equal\n");
	}else{

		if(n1 < n2){
			printf("Heyy' %d is bigger\n",n2);
		}else{
			printf("Heyy' %d is bigger\n",n1);
		}

	}
  wait_for_user_input();

}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application\n");
	while(getchar() != '\n')
	{
	  //just read the input buffer & do nothing(for command prompt)
	}
	getchar();
}
