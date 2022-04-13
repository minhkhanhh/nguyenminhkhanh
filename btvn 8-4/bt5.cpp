#include<stdio.h>
int main()
{
	int n;
	do
	{ 
	printf("nhap so nguyen duong n: "); scanf("%d",&n);
	}
	while(n<=0);

	int max,t;
	for(max=0; n>0; t=n%10)
	{
		if(t>max) max=t;
		n=n/10; 
	}
	
	printf("so lon nhat trong so nguyen duong n la: %d",max); 
}
