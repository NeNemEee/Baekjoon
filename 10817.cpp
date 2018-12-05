#include<iostream>

int main(){
	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	int i=0;
	int tem;
	
	while(i<2){
		if(a[0]>a[1]){
			tem=a[0];
			a[0]=a[1];
			a[1]=tem;
		}
		
		if(a[1]>a[2]){
			tem=a[1];
			a[1]=a[2];
			a[2]=tem;
		}
		
		i++;
	}
	
	printf("%d", a[1]);
	
}


