#include<iostream>

int main(void){
	char buf[100];
	
	scanf("%s",&buf);
	
	int i=0;
	
	while(buf[i]!='\0'){
		i++;
	}
	
	char*str = new char[i];
	str=buf;
	
	int k;
	
	printf("%c",str[0]);
	
	for(k=1;k<i;k++){
		if(k%10==0){
			printf("\n");
		}
		printf("%c",str[k]);
		
	}
	
	return 0;
}
