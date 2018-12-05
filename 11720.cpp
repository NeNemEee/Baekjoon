#include<iostream>

int main(void){
	int nono;
	scanf("%d",&nono);

	char*no = new char[nono];

	scanf("%s",no);
	
	int i;
	int sum=0;
	
	
	for(i=0;i<nono;i++){
		
		sum=sum+no[i]-48;
	}
	
	printf("%d",sum);
	
	delete no;
}
