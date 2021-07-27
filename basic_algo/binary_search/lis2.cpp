#include <iostream>
#include <vector>
using namespace std;

#define endl "\n"

int array[1000001] = {0,};
vector<int> sequence;

void binary_search(int n) {
    int low = 0, high = sequence.size()-1, mid;
    int ret = 1000001;
    while (low <= high) {
        mid = (low + high) / 2;
        int mid_num = sequence[mid];
        if (mid_num >= n) {
            if (ret > mid)
                ret = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
 
    sequence[ret] = n;
}


int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> array[i];	
	}
	
	sequence.push_back(array[0]);
	for(int i = 1; i < n; i++){
		if(sequence.back() < array[i]) {
			sequence.push_back(array[i]);
		} else {
			binary_search(array[i]);
		}
	}
	
	cout << sequence.size();
	

	return 0;
}
