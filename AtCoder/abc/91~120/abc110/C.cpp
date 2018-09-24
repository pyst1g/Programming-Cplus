// finish date: 2018/09/24
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
typedef vector<vector<vector<double>>>
        vvvd;
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
    string S, T;
    cin >> S >> T;
    map<char, char> word;
    rep(i, S.length()) {
        if (word.count(S[i]) && word[S[i]] != T[i]) {
            cout << "No" << endl;
            return 0;
        }
        word[S[i]] = T[i];
    }
    vb check(26, 0);
    for (auto e:word) {
        if (check[e.second - 'a']) {
            cout << "No" << endl;
            return 0;
        }
        check[e.second - 'a'] = true;
    }
    cout << "Yes" << endl;
    return 0;
}

