#include <iostream>
using namespace std;

int main() {
	const int ROWS = 3, COLS = 3;
	int image[ROWS][COLS][3]; // матрица изображения

	// ввод значений с клавиатуры
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << "Введите значения для пикселя (" << i << "," << j << "):\n";
			cout << "Красный: ";
			cin >> image[i][j][0];
			cout << "Зеленый: ";
			cin >> image[i][j][1];
			cout << "Синий: ";
			cin >> image[i][j][2];
		}
	}

	// вывод на экран
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << "[" << image[i][j][0] << "," << image[i][j][1] << "," << image[i][j][2] << "] ";
		}
		cout << endl;
	}

	return 0;
}
