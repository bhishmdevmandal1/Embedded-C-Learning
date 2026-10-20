#include<stdio.h>
#include<stdint.h>

/* This structure is used to store various fields of car details in to variables
 * The variables of this structure consume less memory due to data packing
 * By BitField we reduced the memory consumption to 8 bytes
 */

struct CarDetails
{
	uint64_t speed  :9;  // Max 400 Km/H (9 bits can hold up to 511, covers 400 Km/H)
	uint64_t weight :13; // Max 5000 Kg (13 bits can hold up to 8191)
	uint64_t color  :7;  // ASCII code of color (7 bits can hold standard ASCII 0-127)
	uint64_t price  :28; // Max 100,000,000 USD (28 bits can hold up to 268,435,455)
};

int main(void)
{
	struct CarDetails car;

	// Assigning values directly without bitwise shifting
	car.speed  = 320;        // Example: 320 Km/H
	car.weight = 1500;       // Example: 1500 Kg
	car.color  = 'R';        // Example: 'R' for Red (ASCII: 82)
	car.price  = 85000000;   // Example: 85,000,000 USD

	// Displaying the member elements
	printf("Car Max Speed   : %u Km/H\n", (unsigned int)car.speed);
	printf("Car Weight      : %u Kg\n", (unsigned int)car.weight);
	printf("Car Color (ASCII): %c\n", (char)car.color);
	printf("Car Price       : %u USD\n", (unsigned int)car.price);

	printf("Size of Struct is %u bytes\n", sizeof(car));

	while(getchar() != '\n')
	{
		// just read the input buffer & do nothing (for command prompt)
	}
	getchar();

	return 0;
}
