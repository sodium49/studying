
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    int M = 0;
    cin >> N;
    vector<int> accessible[N][N]; // queue of accessible?
    vector<bool> visited[N][N];
    int n_lines;
    cin >> n_lines;

    for (int i=0; i<n_lines; i++){
        int x, y;
        cin >> x >> y;
        accessible[x][y] = 1;
    }

    for (int i=0; ){

    }




}
