/*
 ========================= 
        M.NABEH
   "The thrill of the code..."
   WA makes it more fun 
 ========================= 
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <bitset>
#include <iterator>
#include <iomanip>
using namespace std;

// ---------- Macros ----------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define All(x) (x).begin()+1, (x).end()
#define rAll(x) (x).rbegin(), (x).rend()-1
#define Sz(x) (int)(x).size()-1
#define el '\n'
#define F first
#define S second
#define see_u_later return 0 // see u later :)

// ---------- Constants ----------
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vpii = vector<pair<int,int> >;
using vpll = vector<pair<long long,long long> >;
using vpil = vector<pair<int,long long> >;
using vpcl = vector<pair<char,long long> >;
using vplc = vector<pair<long long,char> >;

// ---------- Functions ----------

bool win(string s[],char c){
  return
    (s[0][0]==c&&s[0][1]==c&&s[0][2]==c) ||
    (s[1][0]==c&&s[1][1]==c&&s[1][2]==c) ||
    (s[2][0]==c&&s[2][1]==c&&s[2][2]==c) ||

    (s[0][0]==c&&s[1][0]==c&&s[2][0]==c) ||
    (s[0][1]==c&&s[1][1]==c&&s[2][1]==c) ||
    (s[0][2]==c&&s[1][2]==c&&s[2][2]==c) ||

    (s[0][0]==c&&s[1][1]==c&&s[2][2]==c) ||
    (s[0][2]==c&&s[1][1]==c&&s[2][0]==c);
}


void Remy() {
char m;
cin>>m;
string s[3];

cin.ignore();
for (int i = 0; i < 3; i++)
    getline(cin, s[i]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (s[i][j] == ' ') {
                s[i][j] = m;

                if (win(s, m)) {
                    cout << "Yes you can.";
                    return;
                }

                s[i][j] = ' ';
            }
        }
    }

    cout << "No you can't.";
    return;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}