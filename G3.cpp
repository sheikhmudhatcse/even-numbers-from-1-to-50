#include <stdio.h>

int main()
 {
	int i;
	printf("Even numbers between 1 to 50 :\n");
	for (i = 1; i <= 50; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d \n", i);
		}
	}
	return 0;
}