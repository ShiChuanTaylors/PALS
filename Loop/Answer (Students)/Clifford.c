#include <stdio.h>

int main(void) {
	
	int i, j, k, n;
	
	printf("Height: ");
	scanf("%d", &n);
	
	//counting the rows based on n
	for(i = 0; i < n; i++)
	{
		//print the space
		for(j = 0; j < n-i-1; j++)
		{
			printf(" ");
		}
		//print the *
		for(k = 0; k < i+2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}