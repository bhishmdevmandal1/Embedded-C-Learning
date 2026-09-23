#include<stdio.h>

int main(void)
{
	double charge, chargeOf_e, no_ofElectron;

	printf("Enter the given chage : \n");
	fflush(stdout);
	scanf("%le",&charge);

	printf("Enter the charge of electron: \n");
	fflush(stdout);
	scanf("%le",&chargeOf_e);

	no_ofElectron = (charge / chargeOf_e)* -1;
	printf("Number of Electrons(Scientific) = %le\n",no_ofElectron);
	printf("Number of Electrons = %lf\n",no_ofElectron);


	printf("Press Enter to exit the application\n");

	while(getchar() != '\n')
	{

	}
	getchar();
}