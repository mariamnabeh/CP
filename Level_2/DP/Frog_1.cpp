#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define el '\n'
const ll N=1e5+5, INF=1e9;

ll dp[N];
ll a[N]; ll n;
ll solve(ll i){
if(i==n-1) return 0;
if(i>=n) return INF;
if(dp[i]!=-1) return dp[i];
ll ops=solve(i+1)+abs(a[i]-a[i+1]);
ll ops2=solve(i+2)+abs(a[i]-a[i+2]);
ll min_cost=min(ops,ops2);
dp[i]=min_cost;
return min_cost;
}

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
 cin>>n;
 for(int i=0;i<n;i++) cin>>a[i];
 memset(dp,-1, sizeof dp);
    cout<<solve(0)<<el;
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