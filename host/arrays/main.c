

#include<stdio.h>
#include<stdint.h>

int main(void)
{
//	uint32_t studentsAge[100];
//	printf("Size of an array = %u\n",sizeof(studentsAge));
//	printf("Base address of the array = %p\n",studentsAge);


	uint8_t someData[10] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	printf("Before : 2nd data item = %X\n",*(someData+1));

	*(someData+1) = 0x09;
	printf("After  : 2nd data item = %X\n",*(someData+1));

	printf("0th element value = %X\n",someData[0]);



	printf("contents of this array\n");

	for(uint32_t i =0 ; i < 10 ; i++)
	{

		printf("%X\t",someData[i]);
	}
	printf("\nagain contents of this array\n");
	someData[2] = 0x33;
	for(uint32_t i =0 ; i < 10 ; i++)
	{

		printf("%X\t",someData[i]);
	}

	return 0;
}

























