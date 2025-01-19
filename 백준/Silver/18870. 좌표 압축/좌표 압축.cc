#include <bits/stdc++.h>

using namespace std;

int n;

int arr[1000001];
int carr[1000001];
vector <int> vt;

int fx(int k){     // low_bound 구현

    int st = 0;
    int en = vt.size();
    int mid = 0;
    while(st < en){

        mid = (st+en)/2;

        if(vt[mid] < k)
            st = mid + 1;
        else 
            en = mid;
    }

    return st;

}


int main(){
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        arr[i] = temp;
        carr[i] = temp;
    }
    sort(carr, carr + n);
    
    for(int i = 1 ; i < n; i++){  // 중복 제거

        if(carr[i-1] != carr[i])
            vt.push_back(carr[i-1]);


    }


    for (int i = 0; i < n; i++)
    {
        cout << fx(arr[i]) << ' ';
    }

    return 0;
}