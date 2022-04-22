#include<stdio.h>
int timMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

bool kiemTraSNT(int x)
{
	if (x<2) return false;
	if (x<4) return true;
	for(int i=2;i<+x/2;i++)
	{
		if(x%i==0)
		return false;
	}
	return true;
}

int timSNT(int a[],int n)
{
	timMax(a,n);
	for(int i=1;	;i++)
	{
		if(kiemTraSNT(timMax(a,n)+i))
		{
			return timMax(a,n)+i;
		}
	}
}

int main()
{
	int n;printf("nhap n= "); scanf("%d",&n);
	int a[n];
	int i; 
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);scanf("%d",&a[i]); 
	}
	printf(" so nguyen to nho nhat lon hon moi gia tri trong mang la: %d ",timSNT(a,n));
	
}
