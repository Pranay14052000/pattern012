#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,n;
	printf("enter the no of rows to print 012 pattern\n");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("012\t");
		}
		printf("\n");
		
		
	}
	return 0;
}
