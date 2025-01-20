#include <bits/stdc++.h>

using namespace std;

int n,x;

int arr[1000001];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    int temp;

    cin >> temp;

    for (int i = 0; i < temp; i++)
    {
        cin >> x;
        cout << binary_search(arr,arr+n,x) << ' ';
    }

    return 0;
}