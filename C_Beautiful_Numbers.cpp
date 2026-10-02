#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 5;

// Modular Arithmetic
ll add(ll a, ll b) { return (a + b) % MOD; }
ll sub(ll a, ll b) { return (a - b % MOD + MOD) % MOD; }
ll mul(ll a, ll b) { return (a * b) % MOD; }

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = mul(res, base);
        base = mul(base, base);
        exp >>= 1;
    }
    return res;
}

ll modInverse(ll n) { return power(n, MOD - 2); }

// Combinatorics Factorials Precomputation
ll fact[MAXN], invFact[MAXN];

void precompute_combinatorics() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = mul(fact[i - 1], i);
    }
    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 1; i--) {
        invFact[i] = mul(invFact[i + 1], i + 1);
    }
}

// nCr Permutations & Combinations
ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return mul(fact[n], mul(invFact[r], invFact[n - r]));
}

// nPr Permutations
ll nPr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return mul(fact[n], invFact[n - r]);
}

void solve() {
    ll n, 









}

int main() {
    FAST_IO
    precompute_combinatorics();
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}