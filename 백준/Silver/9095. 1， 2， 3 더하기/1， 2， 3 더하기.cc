#include <bits/stdc++.h>

using namespace std;

int n,m,ans,x;


void fx(int k,int g){
    if(k == g){
        ans++;
        return;
    }
    else if(k > g)
    return;

    fx(k+1,g);
    fx(k+2,g);
    fx(k+3,g);

    return;
}



int main(){
    
    cin  >> x;

    for(int i = 0; i < x; i++){
        cin >> n;



        fx(0,n);

        cout << ans << '\n';
        ans = 0;
    }
    return 0;
}