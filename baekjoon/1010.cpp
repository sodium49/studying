
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long dp[31][31] = {};
    int N = 0, M = 0, T = 0;

    // f(0,m) = 1
    for(int i=0; i<31; i++){
        dp[0][i] = 1;
    }

    for (int i=1; i<31; i++){
        for (int j=i; j<31; j++){
            //f(N,M) = f(N, M-1) + f(N-1, M-1)
            if(i == j){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
            }
        }
    }

    
    //DP table checker
    // for (int i=0; i<31; i++){
    //     for (int j=0; j<31; j++){
    //         //f(N,M) = f(N, M-1) + f(N-1, M-1)
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cin >> T;
    
    for (int i=0; i<T; i++){
        cin >> N >> M;
        cout << dp[N][M] << "\n";
    }


}
