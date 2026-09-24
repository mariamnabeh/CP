#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

#define all(x) (x).begin(), (x).end();
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
#define el '\n'

const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

// وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

void Remy() {
    ll n;
    cin >> n;

    vll a(n);
    map<ll, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    if (freq[0] == 0) {
        cout << "YES" << el;
        cout << string(n, 'A') << el;
        return;
    }

    if (freq[0] == 1) {
        cout << "NO" << el;
        return;
    }

    ll k = 0;
    while (freq[k] >= 2) {
        k++;
    }

    string ans = "";
    ans.reserve(n);
    map<ll, int> seen;

    for (int i = 0; i < n; i++) {
        ll x = a[i];
        if (x < k) {
            seen[x]++;
            if (seen[x] == 1) {
                ans += 'A';
            } else if (seen[x] == 2) {
                ans += 'B';
            } else {
                if (x == 0) {
                    ans += 'A';
                } else {
                    ans += 'C';
                }
            }
        } else {
            ans += 'C';
        }
    }

    cout << "YES" << el;
    cout << ans << el;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    cin >> t;

    cout << fixed << setprecision(10);

    while (t--)
        Remy();

    // shortcuts:
    //"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)

    M_NABEH
}