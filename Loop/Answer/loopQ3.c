#include <stdio.h>

int main(void) {
	
	int i, j, k, n;
	
	printf("Height: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			printf(" ");
		}
		for(k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}