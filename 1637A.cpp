#include<bits/stdc++.h>
using namespace std;

#define int                 long long
#define vi                  vector<int>
#define all(c)              (c).begin(), (c).end()
#define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void solution() {
	int n;
	cin >> n;

	vi arr(n);

	FOR (i, 0, n) {
		cin >> arr[i];
	}

	cout << (is_sorted(all(arr)) ? "NO" : "YES");
}

int32_t main() {

	FIO;

	int tc;
	cin >> tc;
	while (tc--) {
		solution();
		cout << '\n';
	}

	return 0;
}