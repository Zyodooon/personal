//A - Vacation Validation

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(void){
    string str;
    int num1,num2,str_num;

    cin>>str_num>>num1>>num2>>str;

    for(int i = num1-1;i <= num2-1;i++){
        if(str[i] == 'o') continue;
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

//配列は０から始まることをちゃんと頭に入れておく（気を抜かない）
//charとstring