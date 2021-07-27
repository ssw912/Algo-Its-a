#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack <int> st;
	int n, m;
	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
	
		cin >> m;
		
		if (m == 0) {
			if (st.empty() == false) 
			{
				st.pop();
			}
		}
		else {
			st.push(m);
		}
	}

	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum << endl;
}


/*
#include <iostream>
using namespace std;
#define MAX 1000000
#define endl "\n"

int sum = 0;

void pop(int a, int *array) {
	if (a > 0) {
		if(array[a-1] != 0) {
			sum -= array[a-1];
			array[a-1] = 0;
		}
		else
			pop(a-1, array);
	}	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k;
	cin >> k;
	
	int *money = new int[k];
	
	for(int i = 0; i < k; i++){
		money[i] = 0;
	}
	
	for(int i = 0; i < k; i++){
		cin >> money[i];
		
		if(0 == money[i]){
			pop(i, money);
		}
		sum += money[i];
	}
	
	delete[] money;

	cout << sum;
	
	return 0;
}
*/
