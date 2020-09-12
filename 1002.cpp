#include<iostream>
#include<cmath>

class Turret{
	private:
		int joeX;
		int joeY;
		int jrR;
		int baekX;
		int baekY;
		int brR;
	public:
		Turret(int x1, int y1,  int r1, int x2, int y2, int r2);
		int calculate();
};

int main(){
	int testCase;
	std::cin>>testCase;
	
	Turret** turretCase = new Turret*[testCase];
	for(int idx=0;  idx<testCase; idx++){
		int x1,x2,y1,y2,r1,r2;
		
		std::cin>>x1>>y1>>r1>>x2>>y2>>r2;
		turretCase[idx] = new Turret(x1,y1,r1,x2,y2,r2);
	}
	
	for(int idx = 0; idx<testCase; idx++){
		std::cout<<turretCase[idx]->calculate();
		
		if(idx!=(testCase - 1))
			std::cout<<std::endl;
	}

	
	for(int idx = 0; idx<testCase; idx++)
		delete turretCase[idx];
		
	delete[] turretCase;
	return 0;
}

Turret::Turret(int x1, int y1,  int r1, int x2, int y2, int r2){
	joeX = x1;
	joeY = y1;
	jrR = r1;
	baekX = x2;
	baekY = y2;
	brR = r2;	
}

int Turret::calculate(){
	int x1 = joeX;
	int y1 = joeY;
	int r1 = jrR;
	int x2 = baekX;
	int y2 = baekY;
	int r2 = brR;
	
	
	int jbX = pow((x1-x2),2);
	int jbY = pow((y1-y2),2);
	int jbR = jbX + jbY;
	
	if(jbR==0){
		if(r1==r2)
			return -1;
		else
			return 0;
	}else{
		if(jbR > pow(r1+r2,2))
			return 0;
		else if(jbR == pow(r1+r2,2))
			return 1;
		else{
			if(jbR > pow(abs(r1-r2),2))
				return 2;
			else if(jbR == pow(abs(r1-r2),2))
				return 1;
			else
				return 0;
		}
	}
}
