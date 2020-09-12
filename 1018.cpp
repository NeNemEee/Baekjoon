#include<iostream>

int main(){
	int x,y;
	std::cin>>y>>x;
	char**chess = new char*[y];
	
	for(int idx = 0; idx<y; idx++){
		chess[idx] = new char[x];
		
		for(int idxx = 0; idxx<x; idxx++)
			std::cin>>chess[idx][idxx];
			
	}
	
	int min = 64;
	int countO = 0;
	int countT = 0;
	
	char defO = 'B';
	char defT = 'W';
	
	for(int ys = 0; ys<=(y-8); ys++){
		for(int xs = 0; xs<=(x-8);xs++){
			for(int idy = ys; idy<(ys+8);idy++){
				for(int idx = xs; idx<(xs+8);idx++){
					if(chess[idy][idx]!=defO)
						countO++;
					
					if(idx!=(xs+7)){
						if(defO=='W')
							defO = 'B';
						else
							defO = 'W';
					}
				}
				for(int idx = xs; idx<(xs+8);idx++){
					if(chess[idy][idx]!=defT)
						countT++;
					
					if(idx!=(xs+7)){
						if(defT=='W')
							defT = 'B';
						else
							defT = 'W';
					}
				}
			}
			
			int minn;
			
			if(countO>countT)
				minn = countT;
			else
				minn = countO;
				
			if(minn<min)
				min = minn;
				
			countO = 0;
			countT = 0;	
		}		
	}

	std::cout<<min;	
	
	for(int idx = 0; idx<y;idx++)
		delete[] chess[idx];
		
	delete[] chess;
	
	return 0;
}

