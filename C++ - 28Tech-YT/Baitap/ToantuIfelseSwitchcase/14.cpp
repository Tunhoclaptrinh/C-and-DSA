#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define sz(a) int((a).size())
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define FastIO                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define TC()                                                                   \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

class PhanSo {
private:
  ll tu, mau;

public:
  PhanSo(ll tu, ll mau) {
    this->tu = tu;
    this->mau = mau;
  }
  friend istream &operator>>(istream &cin, PhanSo &ps) {
    cin >> ps.tu >> ps.mau;
    return cin;
  }
  friend ostream &operator<<(ostream &cout, const PhanSo &ps) {
    cout << ps.tu << "/" << ps.mau;
    return cout;
  }

  friend PhanSo operator+(const PhanSo &x, const PhanSo &y) {
    PhanSo sum(1, 1);
    ll mc = lcm(x.mau, y.mau);
    sum.tu = mc / x.mau * x.tu + mc / y.mau * y.tu;
    sum.mau = mc;
    ll g = gcd(sum.tu, sum.mau);
    sum.tu /= g;
    sum.mau /= g;
    return sum;
  }
};

int main() {
  PhanSo p(1, 1), q(1, 1);
  cin >> p >> q;
  cout << p + q;
  return 0;
}