
#include<stdio.h>
#include<stdint.h>

struct DataSet
{
	char  data1;
	int   data2;
	char  data3;
	short data4;
};

void displayMemberElement(struct DataSet *pdata);

int main(void)
{
	struct DataSet data;
	data.data1  = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	displayMemberElement(&data);

	printf("Before : data.data1 = %X\n",data.data1);

	struct DataSet *pData;
	pData = &data;
	pData -> data1 = 0x55;		//modifythe 1st element
	printf("After : data.data1 = %X\n",data.data1);

	getchar();
	return 0;
}


void displayMemberElement(struct DataSet *pdata)
{
	printf("data1 = %X\n",pdata->data1);
	printf("data2 = %X\n",pdata->data2);
	printf("data3 = %X\n",pdata->data3);
	printf("data4 = %X\n",pdata->data4);

}





