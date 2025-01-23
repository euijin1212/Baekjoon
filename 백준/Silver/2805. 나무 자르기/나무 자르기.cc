#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long chk(vector <long long > x,long long y){

    long long  re = 0;

    
    for(int i = 0; i < x.size(); i++){
        long long  z = x[i] - y; 
        if(z >= 0)
            re += z;
      
    }
    
    return re;
    
}

int main() {

    long long  n,m,temp,ans;

    vector <long long > arr;
    
    cin >> n >> m;

    for(int i = 0; i <n; i++){

        scanf("%lld",&temp);
        
        arr.push_back(temp);
        
    }

    long long int top = *max_element(arr.begin(), arr.end());
    long long int bottom = 1;

    temp = 0;
    
    while(1){
        ans = chk(arr,(top + bottom)/2);
        
        if(ans > m){
            bottom = ((bottom + top) / 2) + 1;  
        }
           

        else if(ans <m)
            top = ((bottom + top) / 2)-1;
        else{
            ans = (top + bottom) /2;
            break;
        }
        
        
          if( bottom > top){
                ans = (top + bottom -1) /2;
                break;    
            }
    }
    
    printf("%lld",ans);
    
    return 0;
}