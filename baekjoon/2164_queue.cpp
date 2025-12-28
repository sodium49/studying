
#include <bits/stdc++.h>
using namespace std;


struct cppQ{
    vector<int> q;
    int head = 0;
    int tail = 0;
    int max_size = 0;
    int size = 0;
    
    void push(int x){
       q[tail++] = x;
       tail = tail % max_size;
       size = (tail-head + max_size)%max_size;
    }

    int pop (){
        int ret = q[head];
        head = (head+1)%max_size;
        size = (tail-head + max_size)%max_size;
        return ret;
    }
};



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;

    cin >> N;
    cppQ card;
    card.q.resize(N+1);
    card.max_size = N+1;

    for (int i=0; i<N; i++){
        card.push(i+1);       
    }

    int act = 0;
    while (card.size != 1){
        if (act == 0 ){
            card.pop();
            act +=1;
        }
        else{
            int tmp = card.pop();
            card.push(tmp);
            act -=1;
        }
    }

    cout << card.q[card.head];

}