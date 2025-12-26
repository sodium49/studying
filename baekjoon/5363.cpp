#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;

    // array gen
    cin >> N;
    cin.ignore();
    vector<string> sentences(N);

    for (int j=0; j<N; j++){
        getline(cin, sentences[j]);
    }


    for (int j=0;j<N;j++){
        vector<string> words;
        string word;
        stringstream ss(sentences[j]);

        while (ss >> word) {
            words.push_back(word);
        }


        for (int k=2; k<words.size() ; k++){
            cout << words[k] << " ";
        }
        cout << words[0] << " ";
        cout << words[1] << " ";

        cout << endl;
    }
}