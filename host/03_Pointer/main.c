//Read operation on pointer
#include<stdio.h>
long long int g_data = 0xFFFEABCD11112345;

int main(void)
{
	char* pAddress1 = (char*) &g_data;									// yields 1 byte of data
	printf("1 Value at address %p is :%x\n",pAddress1,*pAddress1);

	short* pAddress2 = (short*)&g_data;									// yields 2 byte of data
	printf("2 Value at address %p is :%x\n",pAddress2,*pAddress2);

	int* pAddress3 = (int*)&g_data;
	printf("3 Value at address %p is :%x\n",pAddress3,*pAddress3); 		// yields 4 byte of data

	long long* pAddress4 = (long long*)&g_data;
	printf("4 Value at address %p is :%I64x\n",pAddress4,*pAddress4); 	// yields 8 byte of data

}





