#include <bits/stdc++.h>

using namespace std;

double sum;

int n,ans,temp;

int ma = -4000;
int mi = 4000;
int arr[500001]; 

int bin[8002];
int main(){
    
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> temp;
        arr[i]= temp;
        sum += temp;
        bin[temp + 4000]++;
        if(temp <= mi)
            mi = temp;
        if(temp >= ma)
            ma = arr[i];

    }

    // 산술평균
    
    double avg = sum / n;
    if(avg < 0){
        avg = round(-avg);
        if(avg > 0)
            avg = -avg; 
    }   
    cout << round(avg) << '\n';

    //중앙값
    sort(arr,arr+n);
    
    cout << arr[n/2]<< '\n';

    //최빈값
    int x = *max_element(bin,bin+8002);
    vector <int> vt;
    for(int i = 0; i < 8002;i++){

        if(bin[i] == x)
            vt.push_back(i-4000);

    }
    if(vt.size() >= 2)
        cout << vt[1]<< '\n';
    else
        cout << vt[0]<< '\n';

    cout << ma -mi; //범위

    return 0;
}