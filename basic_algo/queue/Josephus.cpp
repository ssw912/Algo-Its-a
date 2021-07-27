#include <iostream>
#include <queue>

using namespace std;
#define endl "\n"

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue<int> q;
	
	int n, k;
	
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++){
		q.push(i);
	}
	
	int count = 0;
	
	cout << "<";
	while(!q.empty()) {
		int a;
		count++;
		
		if(count == k) {
			cout << q.front();
			q.pop();
			count = 0;
			
			if(!q.empty())
				cout << ", ";
		} else{
			a = q.front();
			q.pop();
			q.push(a);
		}
	}
	
	cout << ">";
	
	return 0;
}
