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



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
ll const N=1e5+5;
vector<ll> adj[N];
ll visited[N];
ll papa[N];
ll color[N];
void dfs(ll node, ll p){
visited[node]=1;
papa[node]=p;
color[node]=!color[p];
for(auto i:adj[node]){
    if(visited[i]==0){
        dfs(i,node);
    }
}





}


void Remy() {
    
ll n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }


for(int i=1;i<=n;i++){
    if(!visited[i]){
        dfs(i,0);
    }
}
for(int i=1;i<=n;i++){
for(auto j:adj[i]){
    if(color[i]==color[j]){
        cout<<"IMPOSSIBLE"<<el;
        return;
    }
}}

for(int i=1;i<=n;i++){
    cout<<color[i]+1<<' ';
}
cout<<el;




}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
//cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }

    M_NABEH
}