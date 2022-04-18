#include<stdio.h>
#include<math.h>
int main()
{
// 1. nhap n
	int n,x; 
	printf("nhap n: "); 
	scanf("%d",&n);
	// 2. nhap n so vao mang
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}

	int min;
	int b; 
	
	for(int i=0;i<n;i++)
	{
	if(i == 0)
		{
			min=a[i]-x;
			b=a[i];
		}
	else
		{
			if(min>abs(a[i]-x))
			{
				min = abs(a[i]-x);
				b=a[i];
			}
		}	
	}
	//22 33 44 55 66
	// 90
	// 3. nhap so x bat ki
printf("nhap x: ");
scanf("%d",&x);
	// 4 lay ra so gan nhat so x trong mang n
printf("so gan x nhat la %d ",b);
}
