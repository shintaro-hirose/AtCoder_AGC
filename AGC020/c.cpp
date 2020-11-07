#include <iostream>
#include <bitset>
using namespace std;

int N, A[2009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    bitset<4000001> dp;
    for (int i = 1; i <= N; i++) dp |= (dp << A[i]);

    ll ans_i = 1 << ()

    for (int i = 1; i <= N; i++) {
        if(dp.test(i)){

        }
    }

    return 0;
}