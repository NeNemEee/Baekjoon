#include<iostream>
#include<algorithm>

int main(){
	int input;
	
	scanf("%d", &input);
	
	int*arr = new int[10];
	
	arr[0] = input/1000000000;
	arr[1] = input/100000000 - arr[0]*10;
	arr[2] = input/10000000 - arr[1]*10 - arr[0]*100;
	arr[3] = input/1000000 - arr[2]*10 - arr[1]*100 - arr[0]*1000;
	arr[4] = input/100000 - arr[3]*10 - arr[2]*100 - arr[1]*1000 - arr[0]*10000;
	arr[5] = input/10000 - arr[4]*10 - arr[3]*100 - arr[2]*1000 - arr[1]*10000 - arr[0]*100000;
	arr[6] = input/1000 - arr[5]*10 - arr[4]*100 - arr[3]*1000 - arr[2]*10000 - arr[1]*100000 - arr[0]*1000000;
	arr[7] = input/100 - arr[6]*10 - arr[5]*100 - arr[4]*1000 - arr[3]*10000 - arr[2]*100000 - arr[1]*1000000 - arr[0]*10000000;
	arr[8] = input/10 - arr[7]*10 - arr[6]*100 - arr[5]*1000 - arr[4]*10000 - arr[3]*100000 - arr[2]*1000000 - arr[1]*10000000 - arr[0]*100000000;
	arr[9] = input%10;
	
	int count = 0;
	
	for(int idx=0;idx<10;idx++){
		if(arr[0]==0){
			if(arr[idx]==0){
				count++;
			}else{
				break;
			}
		}
	}
	
	int* sArr = new int[10-count];
	
	for(int idx = 0; idx<(10-count); idx++){
		sArr[idx] = arr[idx+count];
	}
	
	std::sort(sArr,sArr+(10-count));
	
	for(int idx=(9-count); idx>=0;idx--)
		printf("%d",sArr[idx]);
	
	delete[] sArr;
	delete[] arr;
	
	return 0;
}
