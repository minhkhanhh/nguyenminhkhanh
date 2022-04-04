#include <stdio.h>
#include <math.h> //phai co thu muc math de thuc hien lenh sqrt
int main ()
{
	int a;
	scanf("%d",&a);
	
	int b;
	scanf("%d",&b);
	
	int c;
	scanf("%d",&c);
	
	int p,s,cv;
	
	if((a<b+c)||(b<c+a)||(c<a+b))
	
	{
		printf("day la 3 canh cua tam giac \n");
		printf("chu vi tam giac la: %d ", cv=(a+b+c));
		          
		p=cv/2;
		printf("\ndien tich tam giac la: %d", s=sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	else
	{
		printf("day khong phai 3 canh cua tam giac");
	}
}
