#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 50 + 5;
int n, m, w[N], b[N], r[N], cnt, ans = N * N;
string s; 

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
    	cin >> s;
    	for (int j = 0; j < m; j++) {
    		if (s[j] == 'W') w[i]++;
    		if (s[j] == 'B') b[i]++;
			if (s[j] == 'R') r[i]++; 
		}
	}
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			cnt = 0;
			for (int k = 0; k <= i; k++) cnt += b[k] + r[k];
			for (int k = i + 1; k <= j; k++) cnt += w[k] + r[k];
			for (int k = j + 1; k < n; k++) cnt += w[k] + b[k];
			ans = min(ans, cnt);
		}
	}
	cout << ans;
    
    return 0;
}

