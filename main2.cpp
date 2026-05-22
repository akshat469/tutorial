
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	if (!(cin >> n)) return 0;
	if (n < 0) {
		cout << "0"<<endl;
		return 0;
	}

	if (n == 0) { cout << 0 << endl; return 0; }
	if (n == 1) { cout << 1 << endl; return 0; }

	vector<unsigned long long> dp(n+1);
	dp[0] = 0;
	dp[1] = 1;
	for (long long i = 2; i <= n; ++i){ 
        dp[i] = dp[i-1] + dp[i-2];
    }
	cout << dp[n] << endl;
	return 0;
}
