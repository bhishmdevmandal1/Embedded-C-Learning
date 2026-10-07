#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(void)
{
	int32_t start_num, end_num;
	uint32_t even = 0 ;

	printf("Enter starting and ending numbers (give space between 2 nos) :");
	fflush(stdout);
	scanf("%d %d",&start_num,&end_num);

	if(end_num < start_num){
		//error
		printf("Ending number should be > starting number\n");
		wait_for_user_input();
		return 0;
	}

	printf("Even number are :\n");

	while(start_num <= end_num){
		if(!(start_num & 1)){
			printf("%4d\t",start_num);
			even++;
		}
		start_num++;

	}//end of while loop

	printf("\nTotal even numbers : %u\n",even);

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
