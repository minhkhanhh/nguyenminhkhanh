#include<stdio.h>
int UCLN2so(int x,int y)
{
	if(x%y==0)
	{
	return y;
	}
	return UCLN2so(y,x%y);
}

int BCNN2so(int x,int y)
{
	return(x*y)/UCLN2so(x,y);
}

int BCNN(int a[],int n)
{
	int BCNN=a[0];
	for(int i=0;i<n;i++)
	{
		BCNN =BCNN2so(BCNN,a[i]);
	}
	return BCNN;
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
	printf("BCNN cua mang la: %d ",BCNN(a,n));	
}
