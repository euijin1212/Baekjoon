#include <bits/stdc++.h>

using namespace std;

int n,m;

int st,en;

int mi = 0x7fffffff;

int arr[100001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+n);

    for(int st = 0; st < n; st++){

        while(en < n && arr[en] - arr[st] < m){
            en++;
        }

        if(en == n)
        break;

        mi = min(mi,arr[en] - arr[st]);
    }

    cout << mi;
    return 0;
}