#include <iostream>

using namespace std;

int main(){
	int N, K = 0;
	int dp[100001][100001] = {0};
	int values[1001] = {0};
	int weights[1001] = {0};

	// Get number of items and knacksap maximum weights
	cin >> N, K;
	for(int i=1; i<=N ; i++){
		// scanf("%d %d", w[i], v[i]);
		cin >> weights[i], values[i];
	}

	for (int j=1; j<=N; j++)
		for (i=1; i<=K, i++){
			//
		}
	// for (int=1;i<=K;i++){
	// 	if(i == 1) dp[1][i] = 0;
	
	// }

	return 0;
}
