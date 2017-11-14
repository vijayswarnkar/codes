#include <bits/stdc++.h>
using namespace std;

int coinChange() {
    for(int i=0;i < m; i++){
        cin >> a[i];
    }
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        dp[i] = 0;
        for(int j = 0; j < m; j++){
            if(i-a[j] > 0) {
                dp[i] += dp[i-a[j]]*dp[a[j]];
            }else if(i-a[j] == 0) {
                dp[i] += 1;
            }
        }
        cout << i << "=" << dp[i] << endl;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int t, n, m, a[1000], dp[10000];
    // cin >> n >> m;
	// cin >> t;
	// while(t--){
	// 	cout << t << endl;
	// }
	return 0;
}