#include<stdio.h>
int main()
{
	int n;
	do
	{
	printf("nhap n: "); scanf("%d",&n);
	}
	while(n<=0);
	
  int a=n; 
  int i = 1;
  while(n /= 10)
  {
    if((n % 10) % 2 == 0)
    {
      i = 0;
      break;
    }
  }
  if(i == 1)
  {
    printf("%d la so nguyen toan so le",a);
  }
  else
  {
    printf("%d khong phai so nguyen toan so le",a);
  }
}
