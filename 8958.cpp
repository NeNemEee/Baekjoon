#include<iostream>
using namespace std;

class exex{
	private:
		int ca;
		char**pro;
	public:
		exex(int p){
			ca=p;
			
			pro = new char*[ca];
	
			for(int i=0;i<ca;i++)
				pro = new char[80];
		}
};

int main(){
	int ca;
	char**pro;
	scanf("%d",&ca);
	
	
		
	
}
