#include <iostream>
using namespace std;
#define MAX 101
#define endl "\n"

// Euclidean Algorithm !!!
int get_gcd(int a, int b){
	if (a > b) {
		return b ? get_gcd(b, a % b) : a;
	}
	else {
		return a ? get_gcd(a, b % a) : b;
	}	
}

void fraction(int a, int b) {
	int gcd = 1;
	gcd = get_gcd(a, b);
	
	a /= gcd;
	b /= gcd;
	
	cout << a << "/" << b << endl;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	int ring[MAX] = {0,};
	
	for(int i = 0; i < n; i++){
		cin >> ring[i];
	}
	
	for(int i = 1; i < n; i++){
		fraction(ring[0], ring[i]);
	}
	
	return 0;
}

