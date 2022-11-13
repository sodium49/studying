#include <iostream>

using namespace std;

int main(){
	int N, K = 0;
	int dp[100001][100001] = {0};
	int values[1001] = {0};
	int weights[1001] = {0};
	int i,j =0;
	int tmpmax;

	// Get number of items and knacksap maximum weights
	cin >> N >> K;	// N for number of items, K for maximum weights
	for(i=1; i<=N ; i++){
		// scanf("%d %d", w[i], v[i]);
		cin >> weights[i] >> values[i];
	}

	for (i=1; i<=N; i++){
		for (j=1; weights[i] >= j; j++){
			dp[i][j] = dp[i-1][j];
		}
		for (;j<=K;j++){
			for(int k=1;k<=j;k++){
				tmpmax = (weights[j]>tmpmax) ? weights[j]: tmpmax;
			}
			dp[i][j] = (tmpmax>dp[i-1][j]) ? tmpmax:dp[i-1][j];
			
		}
	}

	for (i=1;i<=N;i++){
		for(j=1;j<=K;j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
