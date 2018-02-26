// finish date: 2018/01/08
#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>
#include <algorithm>
#include <stack>
#include <limits>
#include <map>

using namespace std;

#define FOR(i, a, b) for(int i=a;i<b;i++)
#define rep(i, n)  FOR(i,0,n)

bool isExist(char c, string str) {
    rep(i, str.length()) {
        if (c == str[i]) return true;
    }
    return false;
}

int main() {
    int N, T;
    cin >> N >> T;
    int total = 0;
    int nowTime = 0;
    int A;
    rep(i, N) {
        cin >> A;
        if(i==0) nowTime = A;
        if (nowTime < A + T) {
            total += A + T - max(A,nowTime);
            nowTime = A + T;
        }
    }
    cout << total << endl;

    return 0;
}
