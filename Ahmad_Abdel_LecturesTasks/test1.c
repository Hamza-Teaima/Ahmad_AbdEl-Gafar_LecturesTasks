#include<stdio.h>


void main()
{
	/*unsigned char arr[10] = "Hi Hamza";
	int counter = 0;
	for(counter = 0 ; counter <=10; counter++ )
	{
		printf("%c",arr[counter]);
	}*/
	
	int x=9, c=0;
	c = (float)(++x/x++);
	printf("\n%f\n",c);
	printf("%i\n",x);
	printf("Hello\b\\ World\a\t 3.0\n\b");
	/*printf("the address of 1st index is %x\n ",&arr[1]);
	printf("the address of 1st index is %x\n ",&arr[20]);
	printf("the data of 1st index is %x\n ",arr[20]);
	*/
	/*unsigned int *ptr = '\0';
	printf("the size of ptr is %i\n enter the new adrres : ",sizeof(ptr));
	scanf("%x",&(*ptr));
	printf("Hi every\v \x42 body\n");
	printf("Hi every\f body\n");*/

}
