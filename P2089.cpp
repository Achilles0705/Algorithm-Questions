#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int n, use[9000][10], sum, k, a[10];

void dfs(int now, int x) {
	
	if (now == 10) {
		if (x == n) {
			for (int i = 0; i < 10; i++) use[k][i] = a[i];
			sum++;
			k++;
		}
		return;
	}
	for (int i = 1; i <= 3; i++) {
		if (x + i > n) break;
		a[now] = i;
		dfs(now + 1, x + i);
	}
	
}

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    if (n < 10 || n > 30) {
    	cout << 0;
    	return 0;
	}
    dfs(0, 0);
    cout << sum << endl;
    for (int i = 0; i < k; i++) {
    	for (int j = 0; j < 10; j++) {
    		cout << use[i][j] << " ";
		}
		cout << endl;
	}
    
    return 0;
}
