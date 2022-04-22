#include<stdio.h>
int xMuY(int x,int y)
{
	int s=1;
	for (int i=1;i<=y;i++)
	{
		s=s*x;
	}
	return s;
}


int main()
{
	int x,y;printf("nhap x mu y \n");scanf("%d %d",&x,&y);
	printf("x mu y = %d",xMuY(x,y)); 
}
