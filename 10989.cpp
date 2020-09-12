#include<iostream>

int main(){
	int integerN;
	
	int* countingArr = new int[10000];
	
	for(int idx = 0; idx<10000; idx++)
		countingArr[idx] = 0;
	
	scanf("%d", &integerN);
	
	int tmp;
	
	for(int idx = 0; idx<integerN; idx++){
		scanf("%d", &tmp);
		countingArr[tmp - 1]++;
	}
	
	for(int idx = 1; idx<10000; idx++)
		countingArr[idx] = countingArr[idx - 1] + countingArr[idx];
		
	int temp = 0;;
		
	for(int idx = 0; idx<10000; idx++){
		if(temp<countingArr[idx]){
			for(int idxp = 0; idxp<(countingArr[idx]- temp); idxp++)
			printf("%d\n", (idx+1));
			temp = countingArr[idx];
		}
	}

	delete[] countingArr;
	
	return 0;
}
