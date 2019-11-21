#include "iostream"
#include "cstdlib"

using namespace std;

int array_rows_cols(int **a);

int main() {
	int rows;
	int columns;
	cout << "How many rows do you require?" << endl;
	cin >> rows;
	cout << "How many columns do you require?" << endl;
	cin >> columns;
	int *a = new int[columns * rows];
	for (int i = 0; i < columns; i++) {

	}


	system("pause");
	return 0;
}

int array_rows_cols(int **a) {

}