#include<stdio.h>
void main()
{
	int feb1,feb2,feb3=0,lmt;
	printf("\nenter a limit:");
	scanf("%d",&lmt);
	printf("\n0\n1");
	for(feb1=0,feb2=1;1;feb1=feb2,feb2=feb3)
	{
		feb3=feb1+feb2;
		if(feb3>lmt)
		break;
		printf("\n%d",feb3);
	}
	
	
}

