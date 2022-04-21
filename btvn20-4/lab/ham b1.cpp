#include<stdio.h>
#include<math.h>
//bai 1
int tongCacChuSo(int n)
{
	int tong=0;
	int tmp;
	for(tmp=n;tmp!=0;tmp/=10)
	{
		tong+=tmp%10;
	}
	return tong;
}

//bai 2
int chuVi(int a,int b,int c)
{
	
	if (a >= b + c || b >= a + c || c >= a + b)
	{
	return 0;
	}else{
	return a+b+c;
	}
	 
}

//bai 3

float dienTich(int a,int b,int c)
{
	float p;
	if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
	{
		p=(float) (a+b+c)/2;
	return sqrt(p*(p - a)*(p - b)*(p - c));

	}else{
	return 0;
	}
	 
}

//bai 4

int UCLN(int a,int b)
{
	if (a==0 || b==0)
	{
	return a+b;
	}
    while (a != b)
	{
        if (a > b)
		{
            a -= b; 
        }
		else
		{
            b -= a;
        }
    }
    return a;
}

//bai 5

int BCNN(int a,int b)
{
	int u=a*b;
	if(a==0 || b==0)
	{
		printf("khong co BCNN");
		return 0;
	}
	while (a != b)
	{
        if (a > b)
		{
            a -= b; 
        }
		else
		{
            b -= a;
        }
    }
    return u/a;
}


int main()
{
	int n; printf("bai 1 nhap n = "); scanf("%d",&n);
	printf("tong cac chu so %d la: %d\n",n,tongCacChuSo(n));
	int a,c,b;
	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b= ");
	scanf("%d",&b);
	printf("nhap c= ");
	scanf("%d",&c);
	
	
	printf("chu vi tam giac la: %d\n",chuVi(a,b,c));
	printf("dien tich tam giac la: %f\n",dienTich(a,b,c));
	printf("UCLN cua a va b la: %d\n",UCLN(a,b));
	printf("BCNN cua a va b la: %d\n",BCNN(a,b));
	
}
