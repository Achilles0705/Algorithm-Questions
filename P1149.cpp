#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int n, digit[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, cnt;

int calculate(int x) {
	int sum = 0;
	if (x == 0) return 6;
	while(x != 0) {
		sum += digit[x % 10];
		x /= 10;
	}
	return sum;
}

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    n -= 4;
    for (int i = 0; i <= 999; i++) {
    	for (int j = 0; j <= 999; j++) {
    		if (n == calculate(i) + calculate(j) + calculate(i + j)) cnt++;
		}
	}
	cout << cnt;
    
    return 0;
}

