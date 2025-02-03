#include <bits/stdc++.h>

using namespace std;

int n,m;

string str;

map<string,int> cl;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){

        cin >> m;
        cl.clear();
        for(int j = 0; j < m; j++){
            

            cin >> str;
            cin >> str; 

            if(cl.find(str) != cl.end()){
                cl[str]++;
            }
            else
                cl.insert({str,1});

        }
        int temp = 1;
        for(auto iter : cl){
            
            temp *= (iter.second) + 1;

        }
            cout << temp -1 << '\n';



    }


    return 0;
}