
#include<stdint.h>
#include<stdio.h>

struct CarModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct CarModel carBMW = {2001,15000,220,1330};
	struct CarModel carFord = {4031,35000,160,1900.96};
//	struct CarModel carHonda = {.carWeight = 9.90, .carPrice = 15000, .carMaxSpeed =180 };

	printf("Details of car BMW is as follows\n");

	printf("carNumber = %u\n",carBMW.carNumber);
	printf("carPrice = %u\n",carBMW.carPrice);
	printf("carMaxSpeed = %u\n",carBMW.carMaxSpeed);
	printf("carWeight = %.2f\n\n",carBMW.carWeight);

	carFord.carNumber = 7260; //assigning a new value to the structure variable

	printf("Details of car Ford is as follows\n");

	printf("carNumber = %u\n",carFord.carNumber);
	printf("carPrice = %u\n",carFord.carPrice);
	printf("carMaxSpeed = %u\n",carFord.carMaxSpeed);
	printf("carWeight = %.2f\n",carFord.carWeight);

	return 0;
}
