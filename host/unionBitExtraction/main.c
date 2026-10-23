

#include<stdio.h>
#include<stdint.h>

/* Tis structure we used to store various fields of the packet in to variables
 * The variables of this structure consumes 10 bytes in the memory
 * By BitFiled we can reduce this memory consumption
 */

union Packet
{
	uint32_t packetValue;

	struct
	{
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAddr	:8;
		uint32_t shortAddr	:2;
		uint32_t addMode	:1;
	}packetFields;
};



int main(void)
{
	union Packet packet;
	printf("Enter the 32bit packet value :");
	fflush(stdout);
	scanf("%X",&packet.packetValue);



	printf("crc		:%#X\n",packet.packetFields.crc);
	printf("status	 	:%#X\n",packet.packetFields.status);
	printf("payload		:%#X\n",packet.packetFields.payload);
	printf("bat		:%#X\n",packet.packetFields.bat);
	printf("sensor		:%#X\n",packet.packetFields.sensor);
	printf("longAddr	:%#X\n",packet.packetFields.longAddr);
	printf("shortAddr	:%#X\n",packet.packetFields.shortAddr);
	printf("addMode		:%#X\n",packet.packetFields.addMode);

	printf("Size of Struct is %u\n",sizeof(packet));

	while(getchar() != '\n')
	{
		//just read the input buffer & do nothing(for command prompt)
	}
	getchar();

	return 0;


}
