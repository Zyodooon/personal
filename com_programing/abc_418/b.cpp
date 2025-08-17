#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    double max_ratio = 0.0;

    for (int i = 0; i < N; i++) {
        if (S[i] != 't') continue;
        for (int j = i + 2; j < N; j++) {
            if (S[j] != 't') continue;
            int len = j - i + 1;
            int t_count = 0;
            for (int k = i; k <= j; k++) {
                if (S[k] == 't') t_count++;
            }
            if (len >= 3 && t_count >= 2) {
                double ratio = (double)(t_count - 2) / (len - 2);
                max_ratio = max(max_ratio, ratio);
            }
        }
    }
    cout << max_ratio << endl;
    return 0;
}