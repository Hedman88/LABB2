#include <iostream>
#include <cstdlib>

using namespace std;

int array_rows_cols(int *a, int c, int r);

int main() {
	int rows;
	int columns;
	cout << "How many rows do you require?" << endl;
	cin >> rows;
	cout << "How many columns do you require?" << endl;
	cin >> columns;
	int *arr = new int[columns * rows];
	for (int i = 0; i < columns*rows; i++) {
		arr[i] = rand() % 10;
	}

	array_rows_cols(arr, columns, rows);

	int x;
	cin >> x;
	return 0;
}

int array_rows_cols(int *a, int c, int r) {
	int row_sum = 0, column_sum = 0, total_sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[j + i * c] << "\t";
			row_sum = row_sum + a[j + i * c];
		}
		cout << row_sum << endl;
		total_sum = total_sum + row_sum;
		row_sum = 0;
		column_sum = 0;
	}
	for (int i = 0; i < c; i++) {
		for (int k = 0; k < r; k++) {
			column_sum = column_sum + a[k*c + i];
		}
		cout << column_sum << "\t";
		total_sum = total_sum + column_sum;
		column_sum = 0;
	}
	cout << total_sum << endl;
	return true;
}