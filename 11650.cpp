#include<iostream>
#include<vector>

using namespace std;

int main(){
	int input;
	cin>>input;
	
	vector<pair<int,int> > point;
	
	pair<int,int> tmp;
	
	for(int idx=0; idx<input; idx++){
		cin>>tmp.first>>tmp.second;
		point.push_back(tmp);
	}
	
//	for(int idx=input-1; idx>0; idx--){
//		for(int idy=0; idy<idx; idy++){
//			if(point[idy].first>point[idy+1].first){
//				int tmpX = point[idy].first;
//				int tmpY = point[idy].second;
//				point[idy].first = point[idy+1].first;
//				point[idy].second = point[idy+1].second;
//				point[idy+1].first = tmpX;
//				point[idy+1].second = tmpY;
//			}
//		}
//	}
	
//	for(int idx=0; idx<input; idx++){
//		if(point[idx].first == point[idx+1].first){
//			int temp = idx;
//			
//			while(temp<input){
//				if(point[temp].first!=point[temp+1].first)
//					break;
//				
//				temp++;
//			}
//			
//			for(int idy = temp; idy>=idx; idy--){
//				for(int idz = idx; idz<idy; idz++){
//					if(point[idz].second>point[idz+1].second){
//						int tmpX = point[idz].first;
//						int tmpY = point[idz].second;
//						point[idz].first = point[idz+1].first;
//						point[idz].second = point[idz+1].second;
//						point[idz+1].first = tmpX;
//						point[idz+1].second = tmpY;
//					}
//				}
//				
//			}
//			
//			idx = temp;
//		}
//	}
	
	vector<pair<int,int> >::iterator iter;
	
	for(iter=point.begin(); iter!=point.end();iter++)
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	
	return 0;
}
