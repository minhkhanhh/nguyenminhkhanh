#include<stdio.h>
int main()
{
	int n;
	do
	{ 
	printf("nhap so nguyen duong n: "); scanf("%d",&n);
	}
	while(n<=0); 
	int t=0;
	for(n;n!=0;t=n%10,n/=10);
	printf("chu so dau tien cua so nguyen duong n la: %d",t);
	
}
