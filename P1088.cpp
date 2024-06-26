#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e4 + 5;
int n, m, fingers[N];

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> fingers[i];

    for (int i = 0; i < m; i++)
		next_permutation(fingers, fingers + n);

    for (int i = 0; i < n; i++) cout << fingers[i] << " ";

    return 0;
}

