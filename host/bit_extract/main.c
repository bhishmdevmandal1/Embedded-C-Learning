
// Extract bit position from 9th to 14th in data 0xB410 and save it into another variable.
// MASK value 0x003F

#include<stdio.h>
#include<stdint.h>


int main()
{
	uint16_t Data = 0xB410;
	uint16_t output ;

	output = ( Data >> 9 ) & 0x003F;
	printf("Original Data : 0x%04X \n",Data);
	printf("Extracted Output : 0x%04X", output);

	return 0;

}
