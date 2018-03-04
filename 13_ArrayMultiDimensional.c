#include<stdio.h>

int main()
{
	int a[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};
	for(int i=0;i<5;i++)
	{
		printf("The elements in the %d th positions are: ",i);
		for(int j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
