#include <bits/stdc++.h>

using namespace std;

#define MAX 1000001 // n의 최댓값

int n,x,temp,ans;

int arr[MAX*2];

bool isused[MAX*2];

int main() {

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> arr[i];

    }

    cin >> x;

    for(int i = 0; i < n; i++){

        if(x > arr[i] && isused[x - arr[i]] == true){  // arr[i] 의 값을 x의 값과 빼줘서 바로 접근

            ans++;

            // isused[arr[i]] = true; 여기 넣어서 틀림 
        }
        isused[arr[i]] = true;
    }

    cout << ans;
    return 0;
}