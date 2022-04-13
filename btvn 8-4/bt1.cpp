#include<stdio.h>
int main()
{
	int n; printf("nhap n: "); scanf("%d",&n); 
	int t=0; 
	for(int i=1;i<=n;i++) 
	{
		if(n%i==0)
		{
			t+=i;
			 
		}
	}
	printf("tong uoc cua n la: %d",t); 
}
