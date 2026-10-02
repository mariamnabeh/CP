#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;
using ull=unsigned long long;
using it=list<ll>::iterator;
using pii=pair<int,int>;
using vi=vector<int>;
using vll=vector<ll>;

#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define el '\n'

const ll INF=1e18;
const ld PI=acos(-1.0);
const ld EPS=1e-9;

namespace combinatorics
{
    ll MOD;
    vector<ll> fac,inv,finv;

    ll nCr(ll x,ll y)
    {
        if(x<0||y>x||y<0)return 0;
        return fac[x]*finv[y]%MOD*finv[x-y]%MOD;
    }

    ll nPr(ll x,ll y)
    {
        if(x<0||y>x||y<0)return 0;
        return fac[x]*finv[x-y]%MOD;
    }

    ll power(ll b,ll n)
    {
        b%=MOD;
        ll s=1;
        while(n)
        {
            if(n%2==1)s=s*b%MOD;
            b=b*b%MOD;
            n/=2;
        }
        return s;
    }

    void init(int n,ll mod)
    {
        fac.resize(n+1);
        inv.resize(n+1);
        finv.resize(n+1);
        MOD=mod;
        fac[0]=inv[0]=inv[1]=finv[0]=finv[1]=1;
        for(ll i=1;i<=n;++i)fac[i]=fac[i-1]*i%MOD;
        for(ll i=2;i<=n;++i)inv[i]=MOD-MOD/i*inv[MOD%i]%MOD;
        for(ll i=2;i<=n;++i)finv[i]=finv[i-1]*inv[i]%MOD;
    }

    ll mul(ll a,ll b)
    {
        return (a%MOD)*(b%MOD)%MOD;
    }

    ll add(ll a,ll b)
    {
        return (a%MOD+b%MOD)%MOD;
    }

    ll sub(ll a,ll b)
    {
        return ((a-b)%MOD+MOD)%MOD;
    }

    ll divide(ll a,ll b)
    {
        return mul(a,power(b,MOD-2));
    }

    ll Inv(int x)
    {
        return power(x,MOD-2);
    }

    ll catalan(int n)
    {
        return nCr(2*n,n)*Inv(n+1)%MOD;
    }

    ll StarsAndPars(ll n,ll k)
    {
        return nCr(n+k-1,k-1);
    }
};

using namespace combinatorics;

void Remy()
{
  // init(1e6+5,1e9+7); 

ll n, r;
cin>>n>>r;
cout<<nCr(n,r)<<el;







}

int main() {
cin.tie(0)->sync_with_stdio(0);
 init(1e6+5,1e9+7); 
int t = 1;
cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }
}