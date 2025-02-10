#include <bits/stdc++.h>

using namespace std;

int num,k;

vector <int> vt(1001);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num >> k;

     for(int i = 1; i <= num;i++){

        vt[i-1] = i;
     }

    int target = k - 1;
    cout << '<';
    int n = num;

    while(n > 1){

        if(target >= n){

            while(target >= n) target = target - n;
            cout << vt[target];

            vt.erase(vt.begin() + target);
        }

        else{
            cout << vt[target];
            vt.erase(vt.begin() + target);
        } 

        cout << ',' << ' ';
        
        target += k-1;
        n--; 
        
    }
    cout << vt.front();
    cout << '>';

    return 0;
}