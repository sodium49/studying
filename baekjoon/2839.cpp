
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N=0, rem=0;
    int five =0, three = 0;

    cin >> N;

    five = N/5;
    rem = N - five*5;
    three = rem/3;
    rem = N - five*5 - three*3;
    while (rem && five >=0 && three >=0) {
        five -=1;
        rem = N - five*5;
        three = rem/3;
        rem = N - five*5 - three*3;
        // if (rem%3 ==0) return 0;
    } 

    //debug
    // cout << "five=" << five << " rem=" << rem << "\n";
    // cout << "three=" << three << "\n";
    

    if (N - (five*5) - (three*3) == 0 && five >=0 && three >=0){
        cout << five + three << "\n";
    }
    else{
        cout << -1 << "\n";
    }



    return 0;
}