#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf ("nhap n= ");
	scanf ("%d",&n);
	
	char a[n][50];
	printf ("mang chuoi nhap vao \n");
	for (int i=0;i<n;i++)
	{
		scanf("\n%s",a[i]);
	}
	
	char x[50];
	printf ("nhap x= ");
	scanf ("%s",x);
	int c=0;
	for (int i=0;i<n-1;i++)
	{
		if(strcmp (a[i],x) ==0 )
		{
			c=1;
			break;
		}
	}
	if (c!=0)
	{
		printf ("%s co trong chuoi",x);
	}
	else
	{
		printf ("%s khong co trong chuoi",x);
	}
}
