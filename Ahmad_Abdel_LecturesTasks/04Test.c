/* binary manipulation */
#include<stdio.h>

unsigned int num1 = 5; // 

void main()
{
	/*printf("the value is %i\n",num1);

	printf("the result will be : %i\n",(num1<<1));
	printf("the result will be : %i\n",(num1<<2));
	printf("the result will be : %i\n",(num1<<3));
	printf("the value is %i\n",num1);
	printf("\n****************\n");*/
	 
	 /* clear bits 3,4 and Set bit 5 */
	unsigned char t = 17; // 0001 0001
	t &= ~(1<< 4); // 0000 0001
	t &= ~(1<< 3); // 0000 0001
	printf("the value after clear is 0X%X \n",t); //0X1
	t |= (1<< 5);  // 0010 0001
	printf("the value after set is 0X%X \n",t); // 0X21
	printf("\n****************\n");
	
	/* chage the number :) */
	t |= (1<< 2);
	t |= (1<< 6);
	t |= (1<< 3); // 0110 1101
	printf("the value after set is 0X%X \n",t);//0X6D
	printf("the value is %i\n",t);
	printf("\n****************\n");
	
	/* we need to toggle sum bit say  0 6 2 4 */
	t ^= (1<<0);
	t ^= (1<<6);
	t ^= (1<<2);
	t ^= (1<<4); // 0011 1000
	printf("the value after toggle is 0X%X \n",t);//0X38
	printf("the value is %i\n",t);
	printf("\n****************\n");
}