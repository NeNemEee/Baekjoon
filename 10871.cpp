#include<iostream>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	
	int*arr=new int[a];
	int darr[10000];
	
	int i=0;
	
	while(i<a){
		scanf("%d",&arr[i]);
		i++;
	}
	
	int k=0;
	i=0;
	
	while(i<a){
		if(arr[i]<b){
			darr[k]=arr[i];
			k++;
		}
		
		i++;
	}
	
	i=0;
	
	while(i<k){
		printf("%d ",darr[i]);
		i++;
	}
	
	delete arr;
}
