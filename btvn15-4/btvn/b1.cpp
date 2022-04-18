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
	
	
	for (int i=0;i<n;i++)
	{
		printf("a[%d]= ",i); 
		scanf("%d",&a[i]);
	}
	// 3. nhap so x bat ki
	printf("nhap x: "); 
	scanf("%d",&x);
	// 4 lay ra so xa nhat so x trong mang n
	int max = 0 ;
	int result = 0;
	for (int i=0;i< n ;i++)
	{
		// -1 , 3,4,0
		// x = 0
		if(i ==0){
				max = 	abs(a[i] - x); // 4
		}
		if(max < abs(a[i] - x))
		{
				max = 	abs(a[i] - x); // 4
				result = a[i]; // 4
		}
	
	}
	printf("so xa nhat so voi x: %d ",result); 
	 
}
