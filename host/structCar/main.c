#include<stdio.h>
#include<stdint.h>

/* This structure is used to store various fields of car details in variables
 * Without bit-fields, this structure consumes more memory due to data alignment
 */

struct CarDetails
{
	uint16_t speed;   // Max 400 Km/H
	uint16_t weight;  // Max 5000 Kg
	char     color;   // ASCII code of color
	uint32_t price;   // Max 100,000,000 USD
};

int main(void)
{
	// Structure variable declaration and initialization
	struct CarDetails car;

	car.speed  = 320;        // Example: 320 Km/H
	car.weight = 1500;       // Example: 1500 Kg
	car.color  = 'R';        // Example: 'R' for Red (ASCII: 0x52)
	car.price  = 85000000;   // Example: 85,000,000 USD

	// Displaying the member elements
	printf("Car Max Speed   : %u Km/H\n", car.speed);
	printf("Car Weight      : %u Kg\n", car.weight);
	printf("Car Color (ASCII): %c\n", car.color);
	printf("Car Price       : %u USD\n", car.price);

	printf("Size of Struct is %u bytes\n", sizeof(car));

	while(getchar() != '\n')
	{
		// just read the input buffer & do nothing (for command prompt)
	}
	getchar();

	return 0;
}
