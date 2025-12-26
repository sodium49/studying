
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;

    // array gen
    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<string> words;
        string w;
        while (ss >> w) words.push_back(w);

        for (int i = 2; i < (int)words.size(); i++) cout << words[i] << ' ';
        cout << words[0] << ' ' << words[1] << '\n';
    }

}