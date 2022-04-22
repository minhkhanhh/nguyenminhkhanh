#include<stdio.h>
int UCLN2so(int x,int y)
{
	if(x%y==0)
	{
	return y;
	}
	return UCLN2so(y,x%y);
}

int UCLNmang(int a[],int n)
{
	int UCLN= a[0];
	for(int i=1;i<n;i++)
	{
		UCLN = UCLN2so(UCLN,a[i]);
	}
	return UCLN;
}

int main(){
	int n;printf("nhap n ="); scanf("%d",&n);
	int a[n];
	int i; 
	for(i=0;i<n;i++){
		printf("a[%d]",i);scanf("%d",&a[i]); 
	}
	printf("UCLN cua mang la: %d ",UCLNmang(a,n)); 
}
