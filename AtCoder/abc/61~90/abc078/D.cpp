// finish date: 2018/01/11
#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>
#include <algorithm>
#include <stack>
#include <map>
#include <climits>

#define bigmod 1000000007
using namespace std;

#define FOR(i, a, b) for(int i=a;i<b;i++)
#define rep(i, n)  FOR(i,0,n)
#define ll long long

int mul(int a, int b) {
    return (int) (((ll) (a % bigmod) * (b % bigmod)) % bigmod);
}

int factorial(int n) {
    int ans = 1;
    FOR(i, 1, n + 1) {
        ans = ans * i;
    }
    return ans;
}



int main() {
    int N, Z, W;
    cin >> N >> Z >> W;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    if(N==1) cout<<abs(a[a.size()-1]-W)<<endl;
    else cout << max(abs(a[a.size() - 1] - W), abs(a[a.size() - 2] - a[a.size() - 1])) << endl;

    return 0;
}
