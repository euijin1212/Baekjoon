#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ans,rst,temp ; 

int check(int x,int ans){
	
	if(ans % x == 0){
		
		ans = ans / x; 
		
		return ans;
		
	}
	else
		return -1;
	
	
}


int main(void){
	
	scanf("%d",&ans);
	
	rst = -1;
	
	rst = check(3,ans);
	rst = check(5,ans);
		
		while(ans % 5 != 0 ){
			
			ans -= 3;
			
			temp ++;
			
			if(ans <= 0) break;
			
		}
		
		if(ans % 5 ==0){
			
			
		temp += check(5,ans);
		
		rst = temp;
			
		}
		
		
		
		
	
	
	
	
	
	
	printf("%d", rst);
	
	return 0;
}

