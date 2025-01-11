#include <bits/stdc++.h>

using namespace std;

int n,m,ans,x;

int main(){
    
    cin  >> x;

    for(int i = 0; i < x; i++){
        cin >> n;

    for(int i = 1; i < 4; i++){
            if( i == n){
                ans++;
            }
                    for(int j = 1; j < 4; j++){
            if( i+j == n)
                ans++;
        
                            for(int k = 1; k < 4; k++){
            if( i+j+k == n)
                ans++;
        
                            for(int l = 1; l < 4; l++){
            if( i+j+k+l == n)
                ans++;
        
                            for(int q = 1; q < 4; q++){
            if(i+j+k+l+q == n)
                ans++;
        
                            for(int w = 1; w < 4; w++){
            if( i+j+k+l+q+w == n)
                ans++;
        
                            for(int e = 1; e < 4; e++){
            if(i+j+k+l+q+w+ e == n)
                ans++;
        
                            for(int r = 1; r < 4; r++){
            if( r+i+j+k+l+q+w+ e == n)
                ans++;
        
                            for(int t = 1; t < 4; t++){
            if(r+i+j+k+l+q+w+e+t == n)
                ans++;
        
                            for(int y = 1; y < 4; y++){
            if( y+r+i+j+k+l+q+w+e+t == n)
                ans++;
        
                            for(int u = 1; u < 4; u++){
            if( u+y+r+i+j+k+l+q+w+e+t == n)
                ans++;
        }}}}}}}}}}}

    cout << ans << '\n';
    ans = 0;
    }
    return 0;
}