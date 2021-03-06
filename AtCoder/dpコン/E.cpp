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
    int N, W;
    cin >> N >> W;
    vi w(N), v(N);
    rep(i, N) cin >> w[i] >> v[i];

    vvl dp(N, vl(1000 * N + 1, INFll));
    dp[0][v[0]] = w[0];
    ll ma = 0;
    FOR(i, 1, N) {
        dp[i][v[i]] = w[i];
        rep(j, 1000 * N + 1) {
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            if (j + v[i] <= 1000 * N && dp[i - 1][j] != 0) dp[i][j + v[i]] = min(dp[i][j + v[i]], w[i] + dp[i - 1][j]);
        }
    }
    rep(i, N) rep(j, 1000*N + 1) if (dp[i][j] <= W) ma = max(ma, (ll) j);
    cout << ma << endl;

    return 0;
}