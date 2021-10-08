#include <bits/stdc++.h>
#define FR(i, N) for (int i = 0; i < int(N); i++)
#define all(x) begin(x), end(x)

using namespace std;

using ll = long long;

const int MAXN = (int)(2e5) + 5;
vector<ll> dSquare;
ll perfectSquare[5*MAXN];
ll cnt[MAXN];
void solve() {
    FR(i, MAXN) cnt[i] = 0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        cnt[a]++;
    }
    ll res = 0;
    ll pref = 0;
    ll prefCnt = 0;
    FR(a, MAXN) {
        if (cnt[a]) {
            res += cnt[a]*cnt[a]*(a+2);
            res += cnt[a]*(prefCnt*6*a+pref);
            for (ll k : dSquare) {
                if (a - k < 0) break;
                res -= cnt[a]*cnt[a-k]*(6*a-4*(a-k)+4);
                res += cnt[a]*cnt[a-k]*((2*a+1+perfectSquare[4*k+1])/2 + 1);
            }
            prefCnt += cnt[a];
            pref += (-4*a+4)*cnt[a];
        }
    }
    cout << res << '\n';
}
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    for (int i = 1; i*i < 5*MAXN; i++) {
        perfectSquare[i*i] = i;
    }
    for (int i = 1; i < MAXN; i++) {
        if (perfectSquare[i*4 + 1]) {
            dSquare.push_back(i);
        }
    }
    int T;
    cin >> T;
    while (T-->0) {
        solve();
    }
    return 0;
}