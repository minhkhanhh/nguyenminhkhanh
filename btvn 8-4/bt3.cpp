#include<stdio.h>
int main()
{
	int n;
	printf("nhap so nguyen n: "); scanf("%d",&n);
	
	int t=0;
	for(n;n!=0;t+=n%10,n/=10);
	printf("tong so nguyen cua n la: %d",t);
	
}
//t = t + n%10( so du n chia 10) 
