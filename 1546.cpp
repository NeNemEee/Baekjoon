#include<iostream>

float cal(int*arr,int n);

int main(){
	int n;
	scanf("%d",&n);
	
	int*sco=new int[n];
	
	int i=0;
	
	while(i<n){
		scanf("%d", &sco[i]);
		i++;
	}
	
	
	
	float avg = cal(sco, n);
	
	printf("%.2f ",avg);
	
	delete sco;
}


float cal(int* arr, int n){
	


	int tem=arr[0];
	int i=0;
	
	
	while(i<n){
		if(tem<arr[i])
			tem=arr[i];
			
		i++;	
	}
	

	i=0;
	float sum=0;
	float temp;
	
	while(i<n){
		temp=arr[i];
		sum=sum+(temp/tem)*100;
		i++;
	}
	
	return sum/n;
	
	
}
