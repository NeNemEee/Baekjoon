#include<iostream>

int cal(int s);

int main(){
	int a[3];
	
	for(int i=0;i<3;i++)
		scanf("%d",&a[i]);
		
	int mul = a[0]*a[1]*a[2];
		
	cal(mul);
	
}

int cal(int s){
	int di=100000000;
	int p=9;
	while(1){
		if((s/di)>=1){
			break;
		}
		
		p--;
		di=di/10;
	}
	
	char*in=new char[p];
	
	
	
	for(int i=0;i<p;i++){
		in[i]=s/di;
		s=s-in[i]*di;
		di=di/10;
	}
	
	int tem;
	
	for(int k=0;k<10;k++){
		
		tem=0;
		
		for(int t=0;t<p;t++){
			if(in[t]==k)
				tem++;
		}
		
		printf("%d\n",tem);
	}
	
	delete in;
	
}
