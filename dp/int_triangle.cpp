#include<iostream>
 
#define endl "\n"
#define MAX 501
using namespace std;
 
int N, Answer;
int Arr[MAX][MAX];
int DP[MAX][MAX];
 
void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> Arr[i][j];
        }
    }
}
 
void Find_Max()
{
    int Max = 0;
    for (int i = 1; i <= N; i++)
    {
        if (DP[N][i] > Max) Max = DP[N][i];
    }
    Answer = Max;
}
 
void Solution()
{
    Arr[0][0] = Arr[0][1] = Arr[1][0] = DP[0][0] = DP[0][1] = DP[1][0] = 0;
    DP[1][1] = Arr[1][1];
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (DP[i + 1][j] < DP[i][j] + Arr[i + 1][j])
            {
                DP[i + 1][j] = DP[i][j] + Arr[i + 1][j];
            }
            if (DP[i + 1][j + 1] < DP[i][j] + Arr[i + 1][j + 1])
            {
                DP[i + 1][j + 1] = DP[i][j] + Arr[i + 1][j + 1];
            }
        }
    }
    Find_Max();
}
 
void Solve()
{
    Input();
    Solution();
 
    cout << Answer << endl;
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    Solve();
 
    return 0;
}



/*
#include <iostream>
using namespace std;

int selected[501] = {0,};

int max(int n, int *array){
	int max = -1;
	
	int maxIndex = 0;

	if(1 == n) {
		max = array[0];
		selected[1] = 0;
	}
	
	if(2 <= n) {
		for(int i = 0; i < n; i++){

			if((i != selected[n-1]) && (i != (selected[n-1] + 1))) {
				continue;
			}
			else {
				if(max < array[i]){
					max = array[i];
					maxIndex = i;
				}
			}	
			selected[n] = maxIndex;
		}		
	}
	cout << "selected" << selected[n] << endl;
	return max;
}

int main(){
	
	int n;
	cin >> n;
	
	int sum = 0;
	
	for(int i = 1; i <= n; i++) {
		int* input = new int[n];
		for(int j = 0; j < i; j++){
			cin >> input[j];
		}
		sum += max(i, input);
		cout << sum << endl;
		delete[] input;
	}
	
	cout << sum;
	
	return 0;
}
*/

