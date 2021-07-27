#include <iostream>
using namespace std;

#define endl "\n"

int paper[129][129] = {0,};
int w = 0, b = 0;

void divide(int x, int y, int N){
	int count = 0;
	
	for(int i = x; i < x + N; i++) {
		for(int j = y; j < y + N; j++) {
			if(paper[i][j]) {
				count++;
			}
		}
	}
	if(!count)
		w++;
	else if(count == N * N)
		b++;
	else {
		divide(x, y, N / 2);
		divide(x, y + N / 2, N / 2);
		divide(x + N / 2, y, N / 2);
		divide(x + N / 2, y + N / 2, N / 2);
	}
	return;
}
int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> paper[i][j];
		}
	}
	divide(0, 0, n);
	cout << w << endl << b ;
	
	
	return 0;
}
