#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using it = list<ll>::iterator;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'
const int N = 1e5 + 5;

// Bitwise Operations
#define GETBIT(x, i) (((x) >> (i)) & 1ULL)   // Get bit
#define SETBIT(x, i) ((x) | (1ULL << (i)))   // Set bit
#define FLIPBIT(x, i) ((x) ^ (1ULL << (i)))  // Flip bit
#define CLEARBIT(x, i) ((x) & ~(1ULL << (i))) // Clear bit

long long mul(long long x, long long y, const long long &mod) 
{ return ((x % mod) * (y % mod)) % mod; }
long long add(long long x, long long y, const long long &mod)
{ return (((x % mod) + (y % mod)) % mod + mod) % mod; }
long long sub(long long x, long long y, const long long &mod)
{ return (((x % mod) - (y % mod)) % mod + mod) % mod;} 

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

vector<int> adj[N];
int vis[N], p[N];
vector<int> ans;

void dfs(ll u, ll par) {
    vis[u] = 1;
    p[u] = par;

    for (int v : adj[u]) {
        if (v == par) continue;

        if (vis[v]) {
            ans.push_back(v);
            for (int cur = u; cur != v; cur = p[cur]) {
                ans.push_back(cur);
            }
            ans.push_back(v);

            cout << ans.size() << el;
            for (int x : ans) cout << x << " ";
            cout << el;

            exit(0);
        }

        if (!vis[v]) {
            dfs(v, u);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    if (!(cin >> n >> m)) return 0;

    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, 0);
        }
    }

    cout << "IMPOSSIBLE" << el;

    M_NABEH
}