#include<stdio.h>
int main()
{
	int n; printf("nhap n: "); scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			printf ("a[%d]= ",i); scanf("%d",&a[i]);
		}

	
	int  c=0; int x;
	printf("nhap x: "); scanf("%d",&x);
	int i=0;
	for (	;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("%d la so nam trong mang\n",x);
			break;
		}
		
	}
	if(a[i]!=x)
		{
			printf("%d khong phai so trong mang",x);
			
		}
}
