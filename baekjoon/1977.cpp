#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int M, N;
    int sum = 0;
    int min = 0;
    cin >> M >> N;


    int rootM = 1;
    while (rootM * rootM < M) {
        rootM++;
    }
    
    int rootN = 1;
    while (rootN * rootN < N) {
        rootN++;
    }
    if(rootN *rootN > N){
        rootN--;
    }
    // reutrn -1 in case no available between M and N
    if (rootN < rootM){
        cout << -1 << endl;
        return 0;
    }
    
    //get sum of square numbers between M and N
    int cur = rootM;
    while (cur <= rootN){
        sum += cur*cur;
        cur +=1;
    }
    cout << sum << endl;
    cout << rootM*rootM << endl;

    return 0;
}
