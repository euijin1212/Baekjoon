#include <bits/stdc++.h>

using namespace std;

int n;

int arr[50001];

int main(){

    cin >> n;
    arr[1] = 1;
    for(int i = 1; i <= n; i++){
        arr[i] = arr[1] + arr[i-1];
        for(int j = 2; j * j <= i;j++) 
        arr[i] =  min(1 + arr[i-j*j],arr[i]);
    }

    cout << arr[n];
    return 0;
}