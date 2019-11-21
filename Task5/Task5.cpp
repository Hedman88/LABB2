#include <iostream>

using namespace std;

void shrink_array(int a[], int size);

int main() {
	int inputarray[] = { 5, 5, 7, 6, 2, 2 ,11 ,11, 5, 4 };
	int arraySize = sizeof(inputarray) / sizeof(int);
	cout << "Input array: ";
	for (int i = 0; i < arraySize; i++) {
		cout << inputarray[i] << " ";
	}
	cout << endl;

	shrink_array(inputarray, arraySize);

	cout << "Output array: " ;
	for (int i = 0; i < arraySize; i++) {
		cout << inputarray[i] << " ";
	}
	cout << endl << endl;


	int inputarray2[] = { 5, 5, 7, 6, 2, 2 ,11 ,11, 5 };
	int arraySize2 = sizeof(inputarray2) / sizeof(int);
	cout << "Input array: ";
	for (int i = 0; i < arraySize2; i++) {
		cout << inputarray2[i] << " ";
	}
	cout << endl;

	shrink_array(inputarray2, arraySize2);

	cout << "Output array: ";
	for (int i = 0; i < arraySize2; i++) {
		cout << inputarray2[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

void shrink_array(int a[], int size) {
	int j = 0;
	//cout << sizeof(a) << " " << sizeof(int) << endl;
	if (size % 2 == 1) {
		for (int i = 1; i < size - 1; i = i + 2) {
			a[j] = a[i] + a[i - 1];
			j++;
			cout << j << endl;
		}
		a[j] = a[size - 1];
		for (j = j + 1; j < size; j++) {
			a[j] = 0;
		}
	}
	else {
		for (int i = 0; i < size - 1; i = i + 2) {
			a[j] = a[i] + a[i + 1];
			j++;
			cout << j << endl;
		}
		for (j; j < size; j++) {
			a[j] = 0;
		}
	}
	
}