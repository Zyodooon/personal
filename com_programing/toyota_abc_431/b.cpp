#include <bits/stdc++.h>

using namespace std;

int main(){
    int w,n;
    cin>>w>>n;

    vector<int>wight(n+1,0);
    for(int i = 0;i< n;i++){
        cin>>wight[i];
    }

    int q_num;
    cin>>q_num;
    vector<bool>attached(n+1,0);
    for(int i=0;i<q_num;i++){
        int temp;
        cin>>temp;
        if(attached[temp-1] != 0){
            w-=wight[temp-1];
            attached[temp-1]=0;
        } else{
            w+=wight[temp-1];
            attached[temp-1]=1;
        }
        cout<<w<<endl;
    }
    return 0;

}