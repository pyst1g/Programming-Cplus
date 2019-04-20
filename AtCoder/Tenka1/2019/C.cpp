// finish date: 2019/4/20

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


int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int wc = 0;
    int bc = 0;
    rep(i, N) {
        if (S[i] == '.') wc++;
        else bc++;
    }
    int mi = wc;
    int cnt = 0;
    rep(i, N) {
        if (S[i] == '.') wc--;
        else {
            bc--;
            cnt++;
        }
        mi = min(mi, cnt + wc);
    }
    cout << mi << endl;

    return 0;
}
