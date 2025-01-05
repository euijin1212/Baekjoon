#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int num, temp, max, ans, rmax;

int arr[101];


int arr2[1001];

int x = 1;

int main(void){ // 에라토스테네스의-체
	
	scanf("%d",&num);
	
	for(int i = 0; i < num; i++){
		
		scanf("%d",&arr[i]);
		if(max < arr[i]) 
			max = arr[i];
		
	}
	

	
	while(1){

		
		if (x*x <= max && (x+1)*(x+1) > max){
			
			rmax = x;
			break;
		}
		x++;
		
	}
	
	for(int i = 0; i < max; i++){
		
		arr2[i] = 1 + i;

	}
	

	
	
	for(int i = 2; i <= rmax; i++){
		
		for(int j = i + i; j <= max; j += i){
			
			arr2[j-1] = 0;	
			
		}
		
	}
	
	
	for(int i = 0; i < num; i++){
		
		for(int j = 0; j < max; j++){
			
			if(arr[i] == arr2[j] && arr[i] != 1){
				
				temp ++;
				
			}
		}
		
	}
	printf("%d",temp);
	
	
	return 0;
}


