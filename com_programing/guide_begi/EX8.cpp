#include <bits/stdc++.h>
using namespace std;

int main() {
  int patern;
  int N;
  string text;
  int price;
  cin >> patern;

  // パターン1
  if (patern == 1) {
    cin >> price;
  } else if (patern == 2) {
    cin >> text >> price;
    text += "!";
  }
  cin >> N;

  if(patern == 2){
    cout << text << "!" << endl;
  }
  cout << price * N << endl;

  return 0;
}
