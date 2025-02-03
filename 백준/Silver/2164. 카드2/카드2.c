#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int temp[5000000];

int num;

int x,y;

int main(void){
	
	scanf("%d",&num);
	
	for(int i = 0; i < num; i++){
		
		temp[i] = i+1;
		
	}
	
	x = 1;
	
	y = num;
	
	while(num > 1){
		
	if(num % 2 == 0) x = 1; // 짝수일때
	
	else x = 0; // 홀수 일때
			
		
	for(int i = 0; 2 * i < num; i++){			
		
		if(x == 1){
			
			if( i == 0 ) temp[0] = temp[1];
		
			else
				temp[i] = temp[(2*i)+1];
			
		}
		
		
		else{
			
			if(i == 0) temp[0] = temp[2 * (num-1)];
			
			else temp[i] = temp[(2*i)-1];
			
		}
		
	}
	if(x == 1 ) num = num/2; // 짝수일때
	
	else num = (num / 2)+1 ; // 홀수 일때
			
	}
	
	printf("%d",temp[0]);

	return 0;
}
