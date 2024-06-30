#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

const int N = 1e2 + 5;
int r, c, k, cnt;
bool flag;
string s[N];

signed main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	cin >> r >> c >> k;
	for (int i = 0; i < r; i++) cin >> s[i];
	
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			
			flag = 1;
			if (i + k <= r) {	//Êú 
				for (int tmp = 0; tmp < k; tmp++) {
					if (s[i + tmp][j] == '#') {
						flag = 0;
						break;
					}
				}
				if (flag == 1) cnt++;
			}
			
			flag = 1;
			if (j + k <= c) {	//ºá 
				for (int tmp = 0; tmp < k; tmp++) {
					if (s[i][j + tmp] == '#') {
						flag = 0;
						break;
					}
				}
				if (flag == 1) cnt++;
			}
			
		}
	}
	if (k == 1) {
		cout << cnt / 2;
		return 0;
	}
	cout << cnt;
	
	return 0;
}
