#include<stdio.h>
int main(){
	int n;printf("nhap n = ");scanf("%d",&n);
	int t=0;
	int c=0;
	float tbc;
	int a[n];
	for(int i=0;i<n;i++){
		printf("\n a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			t=t+a[i];
			c++;
		}
	}
	tbc=(float)t/c;
	printf("TBC: %d",tbc);
}
