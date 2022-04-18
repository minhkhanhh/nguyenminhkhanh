#include<stdio.h>
int main()
{
	//nhap n
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	
	//nhap mang
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	int min,max;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			min= a[i];
			max =a[i];
		}
		else
		{
			if (min>a[i])
			{
				min= a[i];
			}
			if(max <a[i])
			{
				max=a[i];
			}
		}
	}
	
	printf("doan [a,b] = [%d,%d]",min,max);
}
