#include <stdio.h>
int main ()
{
	printf("nhap so thu nhat: ");
	int a;
	scanf("%d",&a);
	
	printf("nhap so thu hai: ");
	int b;
	scanf("%d",&b);

	printf("nhap so thu ba: ");
	int c;
	scanf("%d",&c);

	int min;
	min = a;
	
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	printf("so nho nhat: %d",min);
}
