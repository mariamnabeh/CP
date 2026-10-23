#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

const ll MOD = 1e9 + 7;
const long long INF = 1e18, N=1e6+5;
#define el '\n'
ll n, x;
 ll dp[N], a[N];
 ll solve(ll i){
 if (i<0) return INF;
 if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    ll ret=INF;
for(int j=0;j<n;j++){
ret=min(ret, solve(i-a[j])+1);
}
return dp[i] = ret;
 }




//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
 cin>>n>>x;
 for(int i=0;i<n;i++) cin>>a[i];
 memset(dp,-1, sizeof dp);
 ll ans=solve(x);
 if(ans==INF) cout<<-1<<el;
else cout << solve(x) << el;

}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
//cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }


}