// finish date: 2018/07/22
#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int (i)=a;(i)<(b);(i)++)
#define rep(i, n)  FOR(i,0,n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;
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


//最大公約数
int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (a < b) {
        swap(a, b);
    }
    int r = 1; //0以外であれば何でも
    while (r != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int N, K;
    cin >> N >> K;
    vi A(N);
    rep(i, N) cin >> A[i];
    sort(A.begin(), A.end());
    int G = A[0];
    FOR(i, 1, N) {
        G = gcd(G, A[i]);
    }
    if (K % G != 0 || A[N - 1] < K) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << "POSSIBLE" << endl;
    }

    return 0;
}

