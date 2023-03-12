#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector >> matrix{{1, 2, 3},
					{4, 5, 6},
					{7, 8, 9}};

	int numRows = matrix.size(); 
	int numCols = matrix[0].size();
	
	for (int i = 0; i < numRows; i++) {
		int secondElement = matrix[i][1];
		for (int j = 0; j < numCols; j++) {
			matrix[i][j] *= secondElement;
		}
	}

	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numCols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
