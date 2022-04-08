#include<stdio.h>
int main()
{
	int n; printf("nhap n: "); scanf("%d",&n);
	int i=0;
	while(i+6<n)
	{
		i+=6;
	}
	printf("so lon nhat nho hon n chia het cho 2 va 3 la %d\t",i);
}
