#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnta = 0;
  int cntb = 0;
  for (auto& it : s) {
    if (it == 'a') cnta++;
    else cntb++;
  }
  cout << cnta << " " << cntb << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
