/*
 * main.c
 *
 *  Created on: Jun 9, 2026
 *      Author: HP
 */

#include <stdio.h>

int main()
{
	unsigned char data = (unsigned char)(0x87 + 0xFF00);		/* doing explicit casting here dosen't prevent any data loss. Compiler comes to know that you just want 1 byte out of the final result and it dosen'tfire any warning.

0x87 + 0xFF00 -> compiler implicitly considers the size of these constants as 4 bytes (of integer data type ).This is also called as integer promotion.
So, compiler did implicit casting twice here 1.It promoted the date size of RHS constant to 'int' 2.While storing the RHS into LHS it again did casting from 'int' to 'unsigned char' and fired the warning "data loss during the conversion". */




	float result = (float)80 /3;		//(float)80 -> (explicit) Promoted to float, 3 ->(implicit) promoted to float . So, the division is now float divided float which yields float.



	printf(" Data   : %u\n result : %f\n",data,result);
}
