// finish date: 2018/01/09
#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>
#include <algorithm>
#include <stack>
#include <map>
#include <climits>

using namespace std;

#define FOR(i, a, b) for(int i=a;i<b;i++)
#define rep(i, n)  FOR(i,0,n)

bool isExist(char c, string str) {
    rep(i, str.length()) {
        if (c == str[i]) return true;
    }
    return false;
}

int fact(int n) {
    int ans = 1;
    FOR(i, 1, n + 1) {
        ans *= i;
    }
    return ans;
}

int main() {
    int N, P;
    string S;
    cin >> N;
    int sum = 0;
    int ma = INT_MIN;
    string mastr = "";
    rep(i, N) {
        cin >> S >> P;
        sum += P;
        if (P > ma) {
            ma = P;
            mastr = S;
        }
    }
    if (ma * 2 > sum) cout << mastr << endl;
    else cout << "atcoder" << endl;


    return 0;
}
