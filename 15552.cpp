#include<iostream>


int main(){
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	
	int no;
	std::cin>>no;
	
	int a,b;
	int i=0;
	
	while(i<no){
		std::cin>>a>>b;
		std::cout<<a+b<<'\n';
		i++;
	}
	
	return 0;
	
}
