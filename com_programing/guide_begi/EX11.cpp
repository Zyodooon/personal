#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,i;
    char char_option[8];
    bool error_flag = false;
    cin >> A >> B;
    int result_num[8];

    for(i = 0;i < 8;i++){
        result_num[i] = 0;
    }

    for(i = 1;i < A;i++){
        int number;
        int error_num;

        cin >> char_option[i] >> number;

        if(char_option[i] == '+'){
            result_num[i-1] += number;
        } else if(char_option[i] == '-'){
            result_num[i-1] -= number;
        } else if(char_option[i] == '*'){
            result_num[i-1] *= number;
        } else if(char_option[i] == '/') {
            if(number == 0) {
                cout << "error" << endl;
                error_num = i;
                error_flag = true;
                break;
            } else {
                result_num[i-1] /= number;
            }
        }

    }

    for(i = 1;i < B;i++){
        if(char_option[i] == '/' && error_flag == true){
            cout << "error" << endl;
            break;
        } else {
            cout << "1:"<<result_num[i]<<endl;
        }
    }
    
    return 0;
}