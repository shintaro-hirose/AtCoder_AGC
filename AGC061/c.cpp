#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

const ll mod = 1000000007;

int main() {
    string S;
    int N;
    ll ans, nmemo;
    
    cin >> S;
    N = S.size();

    ans = 0;
    rep(i, 1 << (N - 1)){
        bitset<10> bs(i);
        nmemo = 0;
        rep(j, N - 1){
            nmemo = nmemo * 10 + (int)(S[i] - '0');
            if(bs.test(j)){
                cout << nmemo << endl;
                ans += nmemo;
                nmemo = 0;
            }
        }
        ans += nmemo * 10 + (int)(S[N - 1] - '0');
    }

    cout << ans << endl;
    
    return 0;
}