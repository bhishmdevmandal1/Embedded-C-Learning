#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int32_t start_num, end_num;
	int32_t sumOf_even = 0;
	uint32_t even;

	printf("Enter starting and ending numbers (give space between 2 nos) :");
	fflush(stdout);
		if(scanf("%d %d",&start_num,&end_num) !=2 )
		{
			printf("Error : Invalid input! Numbers only.\n");
			wait_for_user_input();
			return 0;
		}

	if(start_num > end_num)
	{
			int32_t temp = start_num;
			start_num = end_num;
			end_num = temp;
			printf("[WARNING]: Starting number is greater than ending number. Swapping values...\n\n");
	}


	for( printf("Even number are :\n") ,even = 0 ; start_num <= end_num ; start_num++ )
	{
		if(!(start_num & 1)){
				printf("%4d\t", start_num);
				even++;
				sumOf_even += start_num;
				}
	 }//end of loop

	printf("\nTotal even numbers : %u\n",even);
	printf("Total sum of all even numbers : %d\n",sumOf_even);
	wait_for_user_input();
	return 0;

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
