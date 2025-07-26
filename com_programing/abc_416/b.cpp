//B - 1D Akari

#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s, t;
    cin >> s;

    int length = s.length();
    t.resize(length);

    // まず、#の位置をコピー、それ以外は.で初期化
    for(int i = 0; i < length; i++){
        if(s[i] == '#'){
            t[i] = '#';
        } else {
            t[i] = '.';
        }
    }

    for(int i = 0;i < length; i++){
        if(t[i] == '.'){
            t[i] = 'o';
            i++;
            while(i < length && t[i] != '#'){
                i++;
            }
            i--;
        }
    }

    cout << t << endl;
    return 0;
}