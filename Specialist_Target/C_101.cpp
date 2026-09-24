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
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

void Remy() {
    int n;
    cin >> n;

    vi a(n);
    vi pos;
    int f = -1, l = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 0) {
            if (f == -1) f = i;
            l = i;
        }
        if (a[i] == 1) {
            pos.push_back(i);
        }
    }

    if (f != -1) {
        int lol = -1, rr = -1, mx = -1;

        if (pos.empty()) {
            lol = f;
            rr = l;
        } else {
            int len1 = pos.front() - f + 1;
            if (len1 > mx) {
                mx = len1;
                lol = f;
                rr = pos.front();
            }

            for (int i = 0; i + 1 < (int)pos.size(); i++) {
                int len2 = pos[i + 1] - pos[i] + 1;
                if (len2 > mx) {
                    mx = len2;
                    lol = pos[i];
                    rr = pos[i + 1];
                }
            }

            int len3 = l - pos.back() + 1;
            if (len3 > mx) {
                mx = len3;
                lol = pos.back();
                rr = l;
            }
        }

        a[lol] = 1;
        a[rr] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) a[i] = 0;
        cout << a[i] << ' ';
    }
    cout << el;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    cin >> t;

    while (t--) {
        Remy();
    }

    // shortcuts:
    //"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}