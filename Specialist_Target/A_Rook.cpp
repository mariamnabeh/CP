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
void Remy() {
char c;    
ll r;
cin>>c>>r;
for(ll i=1;i<=8;i++){
    if(i==r){continue;}
    cout<<c<<i<<endl;
}
bool ok=1;
vector<char>a;

a.push_back('a');
a.push_back('b');
a.push_back('c');
a.push_back('d');
a.push_back('e');
a.push_back('f');
a.push_back('g');
a.push_back('h');
for(ll i=0;i<8;i++){
    if(a[i]!=c){
    cout<<a[i]<<r<<endl;
}
}
}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}