#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}
int main(void) {

	int n;
	cin >> n;
	
	string *str;
	str = new string[n];
	
	for(int i = 0; i < n; i++){
		cin >> str[i];
	}
	
	sort(str, str+n, comp);
	
	for(int i = 0; i < n; i++){
		if(i != 0) {	
			if(str[i] == str[i-1])
				continue;
		}
		cout << str[i] << endl;
		
	}
	
	return 0;
}
