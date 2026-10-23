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
const ll N=1e6+5;
ll n;
ll dp[N];
ll solve(ll i){
if(i==0) return 0;
if(i<0) return INF;
ll min_steps = INF;
if(dp[i]!=-1) return dp[i];ll temp=i;
while(temp>0){
   ll digit = temp % 10; 
        temp /= 10; 
        if(digit>0){
            min_steps=min(min_steps, solve(i-digit)+1);
        }
}

return dp[i]= min_steps;
}






//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
  cin>>n;
  memset(dp, -1, sizeof dp)  ;
  cout<<solve(n)<<el;
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