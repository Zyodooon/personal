#include <bits/stdc++.h>
using namespace std;

void input(int array[],int num){
    for(int i = 0;i < num;i++){
        cin >> array[i];
    }
    return;
}

int main(){
    int h_n,b_n,comp_num;
    cin>>h_n>>b_n>>comp_num;
    int head[h_n],body[b_n];
    input(head[],h_n);
    input(body[],b_n);

    int body_min=10000000000;
    for(int i = 0;i < b_n;i++){
        if(body_min>body[i]){
            body_min=body[i];
        }
    }

    for(int i = 0;i < h_n;i++){
        
    }

    
}