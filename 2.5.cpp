#include <iostream>
using namespace std;

const int N = 3;

int main() {
	int a[N][N] = { {2, 7, 6}, {5, 1, 9}, {4, 3, 8} };
	int temp;
	int min_elem;

	for (int i = 0; i < N; i++) {
		min_elem = a[i][0];
		for (int j = 1; j < N; j++) {
			if (a[i][j] < min_elem) {
				min_elem = a[i][j];
			}
		}

		for (int j = 0; j < N; j++) {
			if (a[i][j] == min_elem) {
				temp = a[i][j];
				a[i][j] = a[i][i];
				a[i][i] = temp;
				break;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
