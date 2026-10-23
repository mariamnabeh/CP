#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const ll MOD = 1e9 + 7;
const ll N = 1e6 + 5;
ll dp[N]; ll n;
ll solve(ll i){
if (i<0) return 0;
if(i==0) return 1;
if (dp[i] != -1) return dp[i];
ll ways = 0;
  
    for (int dice = 1; dice <= 6; dice++) {
        ways = (ways + solve(i - dice)) %mod;
}





return dp[i] = ways;


}

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
 cin>>n;
 memset(dp, -1, sizeof dp);
cout<<solve(n)<<endl;
    
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