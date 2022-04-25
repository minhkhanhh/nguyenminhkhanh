#include<stdio.h>
#include<string.h>







int main()
{
	
	int t;
	int n;
	char a[n][50];
	do{	
	printf("1 Nhap so luong sinh vien\n");
	printf("2 Nhap danh sach sinh vien\n");
	printf("3 Sap xep ten sinh vien theo thu tu alphabe\n");
	printf("4 In ra danh sach sinh vien\n");
	printf("5 Thoat\n");
	printf("chon: "); scanf("%d",&t);
		printf("\n");
		printf("\n");
	
	
	if(t==1)
	{
		printf("nhap so luong sinh vien: ");scanf("%d",&n);
	}
		if(t==2)
		{
	 
		for(int i=1;i<=n;i++) 
		{
		printf("sinh vien %d: ",i);
		scanf("%s",&a[i]);
		}
			for (int i=1;i<=n;i++)
			{
			for (int j=1;j<=n-i;j++)
				{
				if(strcmp (a[j],a[j+1]) >0 )
					{
					char tmp [50];
					strcpy(tmp,a[j]);		
					strcpy(a[j],a[j+1]);	
					strcpy(a[j+1],tmp);	
					}
				}
			}
		}
		
		if(t==3)
		{
			printf("Sinh vien sau khi sap xep theo thu tu alphabe la\n");
			for(int i=1;i<=n;i++)
			{
				printf("sinh vien %d: ",i);
				printf("%s\n",a[i]);
			}	
		}
		
		if(t==4)
		{
			printf("cau 3 lam het roi cau 4 em khong biet phai lam gi :(");
		}
		printf("\n");
		printf("\n");
	}
	while(t!=5 );
}
