//Effect of using diferent pointer data types on pointer operations

#include<stdio.h>

long long int g_data = 0xFFFEABCD12112345;

int main(void)
{
	char* pAddress = ( char*) &g_data;
  //printf("addres of pAddress is : %p\n",&pAddress);

	printf("1 char Value of pAddress %p is : %x\n",pAddress,*pAddress);
	pAddress = pAddress + 1;
	printf("2 char Value of pAddress %p is : %x\n",pAddress,*pAddress);
	pAddress = pAddress + 2;
	printf("3 char Value of pAddress %p is : %x\n",pAddress,*pAddress);

	int* pAddress1 = (int*) &g_data;
	printf("1 int Value of pAddress1 %p is : %x\n",pAddress1,*pAddress1);
	pAddress1 = pAddress1 + 1;
	printf("2 int Value of pAddress1 %p is : %x\n",pAddress1,*pAddress1);



}
