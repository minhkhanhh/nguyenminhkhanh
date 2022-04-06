#include<stdio.h>

int main(){
	int a;
	printf("nhap a="); scanf("%d",&a);	

	if(a>=2&&a<8){
		printf("day la thu:%d",a); 
	}else{
		if(a!=8){
			printf("day khong phai ngay trong tuan");
		}else{	 
			printf("day la chu nhat");
		} 
	}			 
}
 
