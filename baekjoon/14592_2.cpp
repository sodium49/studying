#include <bits/stdc++.h>
using namespace std;

// GPT -helped version

struct Team {
    int s, c, l, idx;
};

// “더 좋은 팀이면 true”
bool better(const Team& a, const Team& b) {
    if (a.s != b.s) return a.s > b.s;   // 점수 큰 게 우선
    if (a.c != b.c) return a.c < b.c;   // 페널티(또는 제출횟수) 작은 게 우선
    if (a.l != b.l) return a.l < b.l;   // 마지막 제출시간 작은 게 우선
    return a.idx < b.idx;              // 혹시 모를 완전동률이면 번호 작은 게 우선(안정성)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    Team best{ -1, 0, 0, 1 }; // best.s는 최소로 잡아두기

    for (int i = 1; i <= N; i++) {
        Team cur;
        cur.idx = i;
        cin >> cur.s >> cur.c >> cur.l;

        if (i == 1 || better(cur, best)) best = cur;
    }

    cout << best.idx << "\n";
    return 0;
}
