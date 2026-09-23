
#include <stdio.h>


int main()
{
	float number1 = 45.78976834578;

	printf("NumberF = %0.9f\n",number1);			 //0.9 means print up to 9 decimal places but there is less precision (data loss)
	printf("NumberF = %e\n",number1);

	double number2 = 45.78976834578;
	printf("NumberD = %0.13lf\n",number2);			 // more precision
	printf("NumberD = %0.13le\n",number2);

	float chargeElectron1 = -1.60217662e-19;
	printf("ChargeF = %0.8f\n",chargeElectron1);	 //output is Zero because its a very small number
	printf("ChargeF = %0.8e\n",chargeElectron1);


	double chargeElectron2 = -1.60217662e-19;

	printf("ChargeD = %0.10lf\n",chargeElectron2);	 // this is very small no. thats why output is 0
	printf("ChargeD = %0.30lf\n",chargeElectron2);	 // we used 30 decimal places so the number is shown
	printf("ChargeD = %0.10le\n",chargeElectron2);



	return 0;
}
