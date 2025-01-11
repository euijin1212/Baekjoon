#include <bits/stdc++.h>

using namespace std;

int arr[64][64];

bool isTrue(int r,int c,int n){
    for(int i = r; i < r+n; i++){
           for(int j = c; j < c+n; j++){
                if(arr[i][j] != arr[r][c])
                return 0;
        } 
    }
    return 1;
}

void fx(int r,int c,int n){
    if(isTrue(r,c,n)){
        cout << arr[r][c];
        return;
    }
    int temp = n/2;
    cout << '(';
    fx(r,c,temp);
    fx(r,c+temp,temp);
    fx(r+temp,c,temp);
    fx(r+temp,c+temp,temp);

        cout << ')';

    return;
}

int main(){
    
    int N = 0;

    cin  >> N;

  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    for (int j = 0; j < N; j++)
      arr[i][j] = str[j] - '0';
  }
    fx(0,0,N);
    return 0;
}