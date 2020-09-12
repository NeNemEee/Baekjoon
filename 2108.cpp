#include<iostream>
#include<algorithm>

int main(){
	int integerN;
	
	scanf("%d", &integerN);
	
	int* arr = new int[integerN];
	
	for(int idx = 0; idx<integerN; idx++)
		scanf("%d", &arr[idx]);
	
	double sumA = 0.0f;
	
	for(int idx = 0; idx<integerN; idx++)
		sumA+=(double)arr[idx];
		
	sumA= sumA/(double)integerN;
	int sumF = sumA;
	
	if(sumF>=0){
		if(sumA-(double)sumF>=0.5f)
			sumF++;
	}else{
		if((double)sumF - sumA>=0.5f)
			sumF--;
	}
	
	printf("%d\n", sumF);
		
	std::sort(arr,arr+integerN);
	printf("%d\n", arr[integerN/2]);
	
	int* countingArr = new int[8001];
	
	for(int idx=0;idx<8001;idx++)
		countingArr[idx] = 0;
	
	for(int idx = 0; idx<integerN; idx++)
		countingArr[arr[idx]+4000]++;
	
	int max = 0;
	int maxN = 0;
	for(int idx=0; idx<8001; idx++){
		if(max<countingArr[idx]){
			max = countingArr[idx];
			maxN = idx;
		}	
	}
	
	for(int idx = maxN + 1; idx<8001;idx++){
		if(max==countingArr[idx]){
			maxN = idx;
			break;
		}
	}
	
	
	printf("%d\n", (maxN - 4000));
	
	
	printf("%d", (arr[integerN-1] - arr[0]));
	
	delete[] countingArr;
	
	return 0;
}
