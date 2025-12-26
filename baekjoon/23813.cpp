#include <iostream>
#include <string>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string N;
    string cur;
    long long sum = 0;

    cin >> N;
    cur = N;
    // size_t len = cur.size();

    do {
        char last = cur.back();
        cur.pop_back();
        cur = last + cur;
        sum += stoll(cur);
    }while ((cur != N));

    cout << sum << endl;
}