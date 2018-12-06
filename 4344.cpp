#include<iostream>


float*avg(int**base, int*arr, int a);
void pri(float*avgup,int a);

int main(){
	
	int a;
	scanf("%d",&a);
	
	int**base=new int*[a];
	
	int *arr = new int[a];
	
	int i;
	int b;
	int k;
	
	for(i=0;i<a;i++){
		std::cin>>arr[i];
		
		b=arr[i];
		
		base[i] = new int[b]; 
		
		for(k=0;k<b;k++)
			std::cin>>base[i][k];

	}
	
	float*avgup=avg(base,arr,a);
	
	pri(avgup, a);
	
	return 0;
	
}

float*avg(int**base, int*arr, int a){
	float avg;
	float*avgup=new float[a];
	
	float sum;
	
	int i;
	int k;
	float t;
	
	for(i=0;i<a;i++){
		t=0;
		sum=0;
		for(k=0;k<arr[i];k++)
			sum=sum+base[i][k];
			
		avg=sum/arr[i];
			
		for(k=0;k<arr[i];k++){
			if(base[i][k]>avg)
				t=t+1;
		}
		
		avgup[i]=t/k;
	
	}
	
	return avgup;
}

void pri(float*avgup,int a){
	int i;
	
	for(i=0;i<a;i++)
		printf("%.3f\%\n", avgup[i]*100);
	
}
