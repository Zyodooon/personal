#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    //入力部
    string str;
    cin>>num>>str;

    //判断
    if(num >= 3){
        if(str[num - 3] == 't'
                && str[num - 2] == 'e' && str[num - 1] == 'a'){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}