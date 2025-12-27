
#include <bits/stdc++.h>
using namespace std;

int main(){
    ;ios::sync_with_stdio(false);
    ;cin.tie(nullptr)
    ;int N
    ;int S[4] = {0}, C[4] = {0}, L[4] = {0};
    ;

    cin >> N;
    for (int i=1;i<=N;i++) 
    {cin >> S[i] >> C[i] >> L[i];}


    //Score
    int W = 1;

    for(int i=2; i<=N;i++){
        if (S[i] > S[W]) W = i;
        else if (S[i] == S[W] && C[i] < C[W]) W = i;
        else if (S[i] == S[W] && C[i] == C[W] && L[i] < L[W]) W=i;
    }

    cout << W << "\n";

}