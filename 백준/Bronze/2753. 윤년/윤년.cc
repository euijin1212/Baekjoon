#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){
    
    cin  >> n;

    if(n % 4 == 0 && n % 100 != 0)
     m = 1;
    if(n % 400 == 0)
    m = 1;

    cout << m;
    return 0;
}