#include <bits/stdc++.h>

using namespace std;

#define MAX 10 // 0 부터 9 까지 총 10개의 수

int num,A,B,C; // ABC 곱했을 때 최댓값은 10억 이므로 num을 int 로 잡음

int arr[MAX];



int main() {

    cin >> A >> B >> C;

    num = A*B*C;

    while(num != 0){

        arr[num % 10]++; // 10 으로 나눴을 때 나머지가 맨 뒷자리임

        num /= 10; // 다음 자리수 

    } 

    for(int i = 0; i < 10; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}