
#include<stdio.h>
#include<stdint.h>

/* Tis structure we used to store various fields of the packet in to variables
 * The variables of this structure consumes 10 bytes in the memory
 * By BitFiled we can reduce this memory consumption
 */

struct Packet
{
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAddr	:8;
	uint32_t shortAddr	:2;
	uint32_t addMode	:1;
};



int main(void)
{
	uint32_t packetValue;
	printf("Enter the 32bit packet value :");
	fflush(stdout);
	scanf("%X",&packetValue);

	struct Packet packet;

	packet.crc = (uint8_t) (packetValue & 0x3);
	packet.status = (uint8_t) ((packetValue>>2) & 0x1);
	packet.payload = (uint16_t) ((packetValue>>3) & 0xFFF);
	packet.bat = (uint8_t) ((packetValue>>15) & 0x7);
	packet.sensor = (uint8_t) ((packetValue>>18) & 0x7);
	packet.longAddr = (uint8_t) ((packetValue>>21) & 0xFF);
	packet.shortAddr = (uint8_t) ((packetValue>>29) & 0x3);
	packet.addMode = (uint8_t) ((packetValue>>31) & 0x1);

	printf("crc		:%#X\n",packet.crc);
	printf("status	 	:%#X\n",packet.status);
	printf("payload		:%#X\n",packet.payload);
	printf("bat		:%#X\n",packet.bat);
	printf("sensor		:%#X\n",packet.sensor);
	printf("longAddr	:%#X\n",packet.longAddr);
	printf("shortAddr	:%#X\n",packet.shortAddr);
	printf("addMode		:%#X\n",packet.addMode);

	printf("Size of Struct is %u\n",sizeof(packet));

	while(getchar() != '\n')
	{
		//just read the input buffer & do nothing(for command prompt)
	}
	getchar();

	return 0;


}
