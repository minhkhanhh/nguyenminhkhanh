#include <stdio.h>
int main()
{
	int a,b,USCLN;
	printf("nhap a: "); scanf("%d",&a);
	printf("nhap b: "); scanf("%d",&b);
	
	if(a==0 || b==0)
	{
		printf("USCLN: %d",a+b);	
	}
	else
	{
		for(int i=a,u=b	;i!=u;	)
		{
			if(i>u)
			{
			i=i-u;
			}
			else
			{
			u=u-i;
			}
		USCLN =i;
		}
	}	
	printf("USCLN: %d\n",USCLN);
	int BCNN;
	printf("BCNN: %d",BCNN=a*b/USCLN);
}
