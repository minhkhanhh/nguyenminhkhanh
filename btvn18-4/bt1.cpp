#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);

	char a[n][50]; 
	
	printf("nhap mang chuoi:\n");
	for(int i=0;i<n;i++) 
	{
		scanf("%s",a[i]);
	}
	

	
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if(strcmp (a[j],a[j+1]) >0 )
			char tmp [50];
				strcpy(tmp,a[j]);		
				strcpy(a[j],a[j+1]);	
				strcpy(a[j+1],tmp);	
		}
	}
	printf("chuoi sau khi sap xep la \n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n",a[i])
	}
}
