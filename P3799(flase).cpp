#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N1 = 1e5 + 5;
const int N2 = 1e4 + 5;
const int MOD = 1e9 + 7;
int n, a[N1], backet[N2], cnt;

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    	backet[a[i]]++;
	}
	int mx = a[n - 1];
	for (int i = 0; i < n; i++) {x
		if (i != 0 && a[i] == a[i - 1]) continue;
		for (int j = i + 1; j < n; j++) {
			if (j != 1 && a[j] == a[j - 1]) continue;
			if (backet[a[i] + a[j]] > 1) cnt++;
		}
	}

	cout << cnt % MOD;
    
    return 0;
}

