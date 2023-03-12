#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector >> matrix = { {100, 200, 300, 400},
	{1, 2, 3, 3} };

	int max_power = 0;

	for (int i = 0; i < matrix[0].size(); i++) {
		if (matrix[1][i] == 3 && matrix[0][i] > max_power) {
			max_power = matrix[0][i];
		}
	}

	cout << "The most powerful motor from category 3 has power of " << max_power << endl;

	return 0;
}
