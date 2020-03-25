#include<stdio.h>
int main()
{
	int i,type[20],n;
	int resptime[20];
	printf("number of process:");
	scanf("%d,&n");
	printf("enter the data\n");
	for(i=0;i<n;i++)
	{
		printf("response time of P%d(in milliseconds):",i);
		scanf("%d",&resptime[i]);
		if(resptime[i]<1000)
		{
			type[i]=1;
		}
		else
		{
			type[i]=0;
		}
	}
	printf("process number\tresponse time\ttype\t\tpriority");
	for(i=0;i<n;i++)
	{
		printf("\nP%d\t\t%dms\t\t",i,resptime[i]);
		if(type[i]==1)
		{
			printf("interactive\thigh");
		}
		else
		{
			printf("non-interactive\tlow");
		}
	}
}
