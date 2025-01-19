#include <bits/stdc++.h>
using namespace std;

int n,x;

vector <int> vt;
vector <int> ans;
vector <int> v;



int main()
{

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> x;

        vt.push_back(x);
        ans.push_back(x);
        
    }

    sort(vt.begin(),vt.end());

    for(int i = 0; i < n; i++){

        if(i ==0 || vt[i-1] != vt[i])
            v.push_back(vt[i]);
        
    }
    for(int i = 0; i < n; i++){
        cout << lower_bound(v.begin(),v.end(),ans[i]) - v.begin() << ' ';
    }

    return 0;
}