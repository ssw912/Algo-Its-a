#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1001

bool desc(int a, int b){
	return a < b;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int person[MAX] = {0,};
	int time[MAX] = {0,};
	
	int sum = 0;
	
	cin >> n ;
	
	for(int i = 1; i <= n; i++){
		cin >> time[i];
	}
	sort(time + 1, time + n + 1, desc);
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++){
			sum += time[j];
		}
	}
	
	cout << sum;
	
	return 0;
}

