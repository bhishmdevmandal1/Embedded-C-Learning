
#include<stdio.h>
#include<stdint.h>

struct Packet
{
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addMode;
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
