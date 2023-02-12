#include<stdio.h>


void main()
{
	unsigned char btn_state = 0x55, buffer = 0; /* 0101 0101 */
	 buffer = btn_state;
	btn_state = btn_state & 0xA5; /* 1010 0101 */
	printf("the value using hexa is : 0x%X \n",btn_state); //0x05
	btn_state = buffer;
	btn_state = btn_state & 0xD4; /* 1101 0100 */
	printf("the value using hexa is : 0x%X \n",btn_state); //0x54
	btn_state = buffer;
	btn_state = btn_state & 0xE3; /* 1110 0011 */
	printf("the value using hexa is : 0x%X \n",btn_state); //0x41
	btn_state = buffer;
	btn_state = btn_state & 0xF8;  /* 1111 1000 */
	printf("the value using hexa is : 0x%X \n",btn_state); //0x50

}
