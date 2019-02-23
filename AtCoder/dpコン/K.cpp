// finish date: 2019/2/22

#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int (i)=a;(i)<(b);(i)++)
#define rep(i, n)  FOR(i,0,n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>>
        vvvi;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef vector<double> vd;
typedef vector<vector<double>> vvd;
typedef vector<vector<vector<double>>> vvvd;
typedef vector<bool> vb;
typedef vector<vector<bool>> vvb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<vector<char>> vvc;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, pair<int, int>> plii;
const int bigmod = 1000000007;
const int INF = 1050000000;
const long long INFll = 100000000000000000;


int main() {
    int N, K;
    cin >> N >> K;
    vi a(N);
    rep(i, N) cin >> a[i];
    vb dp(K + 1, false);
    rep(i, N) dp[a[i]] = true;
    rep(i, K + 1) {
        if (dp[i]) continue;
        rep(j, N) {
            if (i + a[j] <= K) {
                dp[i + a[j]] = true;
            }
        }
    }
    if (dp[K]) cout << "First" << endl;
    else cout << "Second" << endl;

    return 0;
}