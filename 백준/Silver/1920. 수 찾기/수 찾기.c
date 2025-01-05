#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num,num2,temp,count;

int middle = 0;


int end = 0;

int static compare(const void *fst,const void *scd){

	
	if(*(int*)fst>*(int*)scd) return 1;
	
	else if (*(int*)fst<*(int*)scd) return -1;
	
	else return 0;
	
}


int main(void){
	
	
	
	
	scanf("%d",&num);
	
	int * ans ;
	
	ans = (int *)malloc(sizeof(int)*num);
	
	for(int i = 0; i < num; i++){
		
		scanf("%d",(ans + i));
		
	}
	
	qsort(ans,num,sizeof(int),compare);
	
	
	
	
	
	scanf("%d",&num2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	for(int i = 0; i < num2; i++){
		
		scanf("%d",&temp);
		int frt = 0;
		end = num-1;
		while(1){
			
	
			
			middle =( frt + end )/2;
				
				if (ans[frt] ==temp) {printf("1\n");break;}
				if (ans[end] ==temp) {printf("1\n");break;}
				if (ans[middle] ==temp) {printf("1\n");break;}
			
			if(temp >ans[middle]){  
				frt = middle+1;
		
				
			}
			else {
				
				end = middle-1;

				
			}
			
			if(frt >= end) {printf("0\n");break;}
			
	}
	
	
	}
	free(ans);
	
	return 0;
}

