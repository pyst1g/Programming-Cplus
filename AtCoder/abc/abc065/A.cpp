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
    int X,A,B;
    cin>>X>>A>>B;
    if(A-B>=0) cout<<"delicious"<<endl;
    else if(X+A-B>=0) cout<<"safe"<<endl;
    else cout<<"dangerous"<<endl;

    return 0;
}
