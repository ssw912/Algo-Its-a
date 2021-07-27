#include <iostream>
using namespace std;

int n, m;
int C[9]= {0,};
bool visited[9] = {0,};

void loop(int a) {
	
	if (a == m) {
		for (int i = 0; i < m; i++) {
			cout << C[i] << " ";
		}
		cout  << "\n";	// endl 사용했더니 시간초과,, 수행속도 느림 (flush 강제) 
		return;
	}
	
	for (int i = 1; i <= n; i++) {
		if (visited[i] != true) {
			visited[i] = true;
			C[a] = i;
			loop(a + 1);
			visited[i] = false;
		}
	}	
}

int main(void){
	
	cin >> n >> m ;
	loop(0);
	
	return 0;
}



