#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,l;
    cin >>m>>n;
    if(m<=n){
        cout << 0 <<endl;
    } else{
        l=m-n;
        cout << l <<endl;
    }
    return 0;

}