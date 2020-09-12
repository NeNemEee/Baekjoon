#include<stdio.h>
#include<algorithm>
#include<vector>

int main(){
	int integerN;
	
	scanf("%d", &integerN);
	
	std::vector<int> arr(integerN);
	
	for(int i = 0; i<integerN; i++)
		scanf("%d", &arr[i]);
		
	sort(arr.begin(), arr.end());
	
	for(int i = 0 ; i<integerN; i++){
		printf("%d", arr[i]);
		
		if(i!=integerN-1)
			printf("\n");
	}
		
		
	return 0;
}

