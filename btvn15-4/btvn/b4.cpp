#include<stdio.h>
#include<math.h>
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
	
	int min;
	
	for(int i=0;i<n;i++)
	{
		if(i==0 || abs(min)<abs(a[i]))
		{
			min = abs(a[i]);	
		}
		
	}
	printf("doan [-x,x] = [%d,%d]",-min,min);
}
