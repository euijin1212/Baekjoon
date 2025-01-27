#include <bits/stdc++.h>

using namespace std;

int n,m,b,ma;

int arr[504][504]; // 25만개만 탐색?   0 <=높이<= 256  이므로 64,000,000 => 브루트포스 시도

int ans = 128000000; // 257 로 하는게 맞나?? 마지막이 0이면 어떡하지
int ans_2;
int fx(int target,int B){

    int x = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(target < arr[i][j])
            {
                int k = arr[i][j] - target;

              x += (k) * 2; //블럭 제거 2초
                B += k; // 블럭 사용한만큼 빼기
            }
            if(target > arr[i][j]){
                int k = target - arr[i][j];
                x += k;
                B -= k;
            }
            
        }
     }

     if(B >= 0)
        return x;
    
    else 
    return 128000000; // 최대 시간 2초 x 256(높이) x 250000 (블럭 개수)



}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int * c ;

    cin >> n >> m >> b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            cin >> arr[i][j];
            
        }
    }

    for(int i = 0; i <= 256; i++){
        int tem = fx(i,b);

        if(ans >= tem){
            ans = tem;
            ans_2 = i;
        }
    }
    
    cout << ans << ' ' << ans_2;

    // cout << *min_element(ans+mi,ans + ma+1) << ' '<<min_element(ans+mi,ans + ma+1) - &ans[0]; // ma로 했다가 틀림


 
    return 0;
}