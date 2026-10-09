#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using it = list<ll>::iterator;
using pii = pair<int, int>;
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
#define GETBIT(x, i) (((x) >> (i)) & 1ULL)    // Get bit
#define SETBIT(x, i) ((x) | (1ULL << (i)))    // Set bit
#define FLIPBIT(x, i) ((x) ^ (1ULL << (i)))   // Flip bit
#define CLEARBIT(x, i) ((x) & ~(1ULL << (i))) // Clear bit

long long mul(long long x, long long y, const long long &mod)
{
    return ((x % mod) * (y % mod)) % mod;
}
long long add(long long x, long long y, const long long &mod)
{
    return (((x % mod) + (y % mod)) % mod + mod) % mod;
}
long long sub(long long x, long long y, const long long &mod)
{
    return (((x % mod) - (y % mod)) % mod + mod) % mod;
}

// وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

vector<ll> adj[N];
ll vis[N];
ll visited = 0;
bool cycle = 0;
void dfs(ll u, ll par)
{
    vis[u] = 1, visited++;
    for (auto i : adj[u])
    {
        if (par == i)
            continue;
        if (vis[i])
        {
            cycle = 1;
            return;
        }
        dfs(i, u);
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    if (m != n - 1)
    {
        cout << "NO" << el;
        return 0;
    }
    for (int i = 0; i < m; i++)
    {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
    if (visited == n && !cycle)
    {
        cout << "YES" << el;
    }
    else
        cout << "NO" << el;
}