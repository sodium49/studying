#include <iostream>

using namespace std;

int main(){
	int N, K = 0;
	// int maxWeightTable[100001][100001] = {{0}};
	int **maxWeightTable = new int*[100001];
	int values[1001] = {};
	int weights[1001] = {};
	int i,j,l =0;
	int tmpmax;
	for (i=0;i<100001;i++){
		maxWeightTable[i] = new int[100001];
	}

	// Get number of items and knacksap maximum weights
	// cout << "123" << endl;
	cin >> N >> K;	// N for number of items, K for maximum weights
	for(i=1; i<=N ; i++){
		// scanf("%d %d", w[i], v[i]);
		cin >> weights[i] >> values[i];
	}

	for (i=1; i<=N; i++){
		// i for current item
		for (i=1;i<=N;i++){
			for(j=1;j<=K;j++){
				cout << maxWeightTable[i][j] << " ";
			}
			cout << endl;
		}
		int curWeight = weights[i];
		for (j=1; curWeight >= j; j++){
			maxWeightTable[i][j] = maxWeightTable[i-1][j];
		}
		// J for maxmium weights
		for (;j<=K;j++){
			// tmpmax = dp[i-1][1];
			// dp[i][j]  = (tmpmax>curWeight)? tmpmax:curWeight;
			for(int l=1;l<=j;l++){
				// when the value increased
				if(tmpmax < maxWeightTable[i-1][l]){
					tmpmax = maxWeightTable[i-1][l];
					if(tmpmax + curWeight < j){
						maxWeightTable[i][j] = tmpmax + curWeight;
					}
					else{
						maxWeightTable[i][j]  = (tmpmax>curWeight)? tmpmax:curWeight;
					}
				}
				// tmpmax = (weights[j]>tmpmax) ? weights[j]: tmpmax;
			}			
		}
	}


	return 0;

}
