#include<stdio.h>
int main()
{
	int n=0; printf("nhap n: "); scanf("%d",&n);
	int i=1;
	printf("nhung so le nho hon n la: ");
	while (i<10000&&i<n)
	{
		printf("%d\t",i);
		i+=2;
	}
}
