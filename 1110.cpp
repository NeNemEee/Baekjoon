#include<iostream>

int main(){
	char no[2];
	scanf("%s", &no[0]);
	
	char a[2];
	char b;
	int c;
	int i=0;
	
	a[0]=no[0];
	a[1]=no[1];
	
	while(1){
		
		if(a[1]=='\0'){
			a[1]=a[0];
			a[0]='0';
		}
			
	
		b=a[1];
		c=(a[0]-'0'+a[1]-'0');
		
		if(c<10){
			if(b=='0'){
				a[0]=c+'0';
				a[1]='\0';
			}else{
				a[0]=b;
				a[1]=c+'0';
			}
		}else{
			a[0]=b;
			a[1]=c%10+'0';
		}
		
		i++;
	
		if(a[0]==no[0]&& a[1]==no[1]){
			printf("%d",i);
			break;
		}
		
	}
	
	
}
