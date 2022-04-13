#include <stdio.h>
 int main()
{
	int a,b;
	do{
	printf("nhap a va b sao cho a<b\n") ;
	printf("nhap a: "); scanf("%d",&a);
	printf("nhap b: "); scanf("%d",&b);
		
	  } 
	while(a>b);
	
	int c,i,t;
	printf("nhung so nguyen to trong khoang a va b la: "); 
	for (i=a+1;i<b;i++) 
	{
		t=1;
		for(c=2;c<=i/2;c++) 
		{
			if(i%c==0) 
			{
				t=0;
				break; 
			}
		}
		if(t==1)
		printf("%d ",i) ;
	}
} 
