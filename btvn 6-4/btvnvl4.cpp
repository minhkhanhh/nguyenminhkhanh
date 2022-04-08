#include<stdio.h>
int main(){
	int n=0; printf("nhap 1 day so: "); scanf("%d",&n);
	int i =0;
	while(n>0){
	 	i=i*10+n%10; 
		 n/=10; 
		  
		  
	} printf("%d",i);
}

