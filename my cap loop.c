//print the following pattern.

#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, row;
	
	printf("enter the number of rows");
	scanf("%d", &row);
	
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("0 1 ");
		}
	printf("\n");
	}
getch();
return 0;
}
