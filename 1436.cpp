#include<iostream>

int main(){
	int n;
	std::cin>>n;

	int s[7];
	int idx = 1;
	int count = 0;
	while(idx<2666800){
		s[0] = idx/1000000;
		s[1] = idx/100000 - s[0]*10;
		s[2] = idx/10000 - s[0]*100 - s[1]*10;
		s[3] = idx/1000 - s[0]*1000 - s[1]*100 - s[2]*10;
		s[4] = idx/100 - s[0]*10000 - s[1]*1000 - s[2]*100 -s[3]*10;
		s[5] = idx/10 - s[0]*100000 - s[1]*10000 - s[2]*1000 - s[3]*100 - s[4]*10;
		s[6] = idx%10;
		
		for(int i = 0; i<5; i++){
			if(s[i]==6&&s[i+1]==6&&s[i+2]==6){
				count++;
				break;
			}
				
		}
		
		if(count == n){
			std::cout<<(s[0]*1000000 + s[1]*100000 + s[2]*10000 +s[3]*1000 + s[4]*100 + s[5]*10 + s[6]);
			break;
		}
		
		idx++;
		
	}
	
	
	
	
	return 0;
}
