#include <bits/stdc++.h>

using namespace std;

#define MAX 10 // 0 부터 9 까지 총 10개의 수

int N,ans,temp;

int arr[MAX];

int main() {

    cin >> N;


    while(N != 0){
        temp = N%10;
        if(temp == 9)
            arr[temp-3]++;
        else
            arr[temp]++;


        N /= 10;

    } 

    arr[6] = (arr[6] + 1) / 2; // 홀수 일 때는 +1 짝수일 때는 /2 그대로 나와야 함

    // ans = *max_element(arr,arr+10);

    ans = *max_element(begin(arr),end(arr));

    cout << ans << '\n';
    
    return 0;
}