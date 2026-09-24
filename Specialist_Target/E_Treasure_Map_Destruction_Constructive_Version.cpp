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

// وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

void Remy() {
    int n;
    cin >> n;

    vll b(n);
    vi pref(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] != -1) {
            int l = max(0, (int)(i - b[i] + 1));
            int r = min(n - 1, (int)(i + b[i] - 1));
            if (l <= r) {
                pref[l]++;
                pref[r + 1]--;
            }
        }
    }

    vi ans(n, 0);
    int count = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        count += pref[i];
        if (count == 0) {
            ans[i] = 1;
            cnt++;
        }
    }

    if (!cnt) {
        cout << -1 << el;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            bool ok = false;
            if (i - b[i] >= 0 && ans[i - b[i]]) ok = true;
            if (i + b[i] < n && ans[i + b[i]]) ok = true;

            if (!ok) {
                cout << -1 << el;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << ans[i];
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