#include<stdio.h>
int main()
{
	int n; printf("nhap n: "); scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf ("%d",&a[i]);
	}
	
	int i=n-1;
	for(	;i>=0;i--)
	{
		if(a[i]%2!=0)
		{
			printf("%d la so le cuoi cung cua mang",a[i]);
			break;
		}
	}
		if(a[i]%2==0)
		{
			printf("khong co so le trong mang");
		}
}
