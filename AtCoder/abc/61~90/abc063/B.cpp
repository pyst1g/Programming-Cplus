// finish date: 2018/01/20
#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>
#include <algorithm>
#include <stack>
#include <map>
#include <climits>

using namespace std;

#define FOR(i, a, b) for(int (i)=a;(i)<(b);(i)++)
#define rep(i, n)  FOR(i,0,n)
#define ll long long
#define bigmod 1000000007
#define INF 500000000


int main() {
    string S;
    cin >> S;
    map<char, int> mp;
    rep(i, S.length()) {
        mp[S[i]]++;
        if (mp[S[i]] >= 2) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;

    return 0;
}
