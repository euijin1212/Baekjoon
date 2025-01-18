#include <bits/stdc++.h>

using namespace std;

long long  k,n,ans,temp;



long long arr[10001];

long long  arr2[10001];

long long sum,st,en,mid;


int fx(int temp){
    int x = 0;
    for(int i = 0; i < k;i++){
        x += arr[i] / temp;
    }

    return x;

}


int main(){
    
    cin >> k >> n;

    for(int i = 0; i < k; i++){

        cin >> arr[i];

    }

    st = 1;
    en = 2300000000;

    while(st < en){

        mid = (st + en+1)/2;

        int g = fx(mid);

        if(g >= n){
            st = mid;
        }
        else 
            en = mid - 1;
    }

            cout << st;

    return 0;
}