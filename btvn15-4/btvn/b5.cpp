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
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<i-1;j++)
		{
			if(a[j]%2!=0)
			{
				
				int temp = a[j]; 
				a[j] = a[j+1]  ; 
				a[j+1] = temp ;
			}
		}
	}
	for(int i=0;i<n;i++)
	{ 
	printf("%d ",a[i]); 
	}
}
