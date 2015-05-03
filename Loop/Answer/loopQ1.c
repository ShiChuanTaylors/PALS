#include <stdio.h>

int main(void) {
	
	int i, j, k, n;
	
	printf("Height: ");
	scanf("%d", &n);
	
	//counting the rows based on n
	for(i = 0; i < n; i++)
	{
		//print the *
		for(j = 0; j < i+2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}