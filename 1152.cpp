#include<iostream>

int main(){

	char st[1000000];
	
	scanf("%[^\n]",st);
	
	int k=0;
	
	for(int i=0;i<1000000;i++){
		if(st[i]==' '){
			if(i!=0){
				k++;
				
				if(st[i+1]=='\0')
					break;
			
			}else{
				if(st[i+1]=='\0')
					break;
			}
		}else{
			if(st[i+1]=='\0'){
				k++;
				break;
			}
		}
	}
	
	
	printf("%d",k);
}


