#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N1 = 1e5 + 5;
const int N2 = 5 * 1e3 + 5;
const int MOD = 1e9 + 7;
int n, a[N1], backet[N2], ans;

int calculate(int x) {
	return x * (x - 1) / 2;
}

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    int mx = 0, mn = N2;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    	backet[a[i]]++;
    	mx = max(mx, a[i]);
    	mn = min(mn, a[i]);
	}
	for (int i = mn + 1; i <= mx; i++) {
		if (backet[i] >= 2) {
			for (int j = mn; j <= i / 2; j++) {
				if (j != i - j) 
					ans += calculate(backet[i]) * backet[j] * backet[i - j] % MOD;
				else if (backet[j] >= 2 && j * 2 == i)
					ans += calculate(backet[i]) * calculate(backet[j]) % MOD;
			} 
			ans %= MOD;
		}
	}

	cout << ans;
    
    return 0;
}

