#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

#define endl "\n"

int operation[100001] = {0,};
int print[100001] = {0,};

struct cmp {
	bool operator()(int a, int b) {
		if (abs(a) > abs(b))
			return true;
		else if (abs(a) == abs(b)) {
			if(a > b)
				return true;
			else
				return false;
		}
		return false;
	}
};

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	priority_queue<int, vector<int>, cmp> pq;
	
	int n;
	cin >> n;
	
	int index = 0;
	for(int i = 0; i < n; i++) {
		cin >> operation[i];
		
		if(operation[i] == 0) {
			if(!pq.empty()){
				print[index] = pq.top();
				pq.pop();
			}
			else
				print[index] = 0;
			index++;
			
		} else {
			pq.push(operation[i]);
		}
	}
	
	for(int i = 0; i < index; i++) {
		cout << print[i] << endl;
	}

	return 0;
}
