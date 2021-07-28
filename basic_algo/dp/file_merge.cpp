#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
#define endl "\n"

int file[501] = {0,};
int dp[501][501] = {0,};
int sum[501] = {0,};


int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		
		int n;
		cin >> n;
			
		for (int j = 1; j <= n; j++) {
			cin >> file[j];
			sum[j] = sum[j-1] + file[j];
		}
		
		for (int k = 1; k < n; k++) {
			for (int x = 1; x + k <= n; x++) {
				int y = x + k;
				dp[x][y] = INT_MAX;
				
				for (int mid = x; mid < y; mid++) {
					dp[x][y] = min(dp[x][y], dp[x][mid] + dp[mid + 1][y] + sum[y] - sum[x - 1]);
				}
			}
		}
		
		cout << dp[1][n] << endl;
	}

	return 0;
	
}
