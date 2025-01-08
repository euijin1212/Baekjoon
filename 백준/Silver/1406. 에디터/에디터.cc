#include <bits/stdc++.h>

using namespace std;

int now,m;

stack <char> lst;

stack <char> rst;

char X;

string s;

int main(){

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        lst.push(s[i]);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> X;

        if(X == 'L'){
            if(lst.empty())
                continue;
            rst.push(lst.top());
            lst.pop();
        }
        else if(X == 'D'){
            if(rst.empty())
                continue;
            lst.push(rst.top());
            rst.pop();
        }
        else if(X == 'B'){
            if(lst.empty())
                continue;
            lst.pop();
        }
        else if(X == 'P'){
            cin >> X;
            lst.push(X);
        }
    }

    while(!lst.empty()){
        rst.push(lst.top());
        lst.pop();
    }
        while(!rst.empty()){
        cout << rst.top();
        rst.pop();
    }
    return 0;
}