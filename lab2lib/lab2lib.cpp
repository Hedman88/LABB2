#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "lab2lib.h"

using namespace std;

bool is_sorted(int a[], int numbers) {
	for (int i = 0; i < numbers - 1; i++) {
		if (a[i] < a[i + 1]) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

void task1() {

	int numbersInput;
	cout << "How many numbers do you want to put in your array?" << endl;
	cin >> numbersInput;
	int *numberItems = new int[numbersInput];
	for (int i = 0; i < numbersInput; i++) {
		cout << "Give me number nr: " << i + 1 << endl;
		cin >> numberItems[i];
	}
	cout << "Sorted? " << is_sorted(numberItems, numbersInput) << endl;
	delete numberItems;
}

void task2() {
	int wordSize;
	cout << "How many letters does your word consist of?" << endl;
	cin >> wordSize;
	wordSize++;
	char *word = new char[wordSize];
	cout << "Give me your word" << endl;
	cin >> word;
	cout << "Palindrome? " << is_palindrome(word, wordSize) << endl;
	delete word;
}

bool is_palindrome(char a[], int wordSize) {
	for (int i = 0; i <= (wordSize / 2); i++) {
		if (a[i] == a[(wordSize - i) - 2]) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

void task3() {
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
	delete[] arr;
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

void task4() {
	while (true) {
		int a, b, c;
		bool order;

		cout << "Give a(0 to quit) :" << endl;
		cin >> a;
		if (a == 0) {
			break;
		}
		cout << "Give b :" << endl;
		cin >> b;
		cout << "Give c :" << endl;
		cin >> c;
		cout << "Sort ascending / descending(1 / 0) :" << endl;
		cin >> order;

		swap_sort(a, b, c, order);

		cout << "Result : " << a << " " << b << " " << c << endl;
	}
}

void swap_sort(int &a, int &b, int &c, bool order) {

	if (order) {
		int k;
		if (a > b) {
			k = b;
			b = a;
			a = k;
		}
		if (b > c) {
			k = c;
			c = b;
			b = k;
		}
		if (a > b) {
			k = b;
			b = a;
			a = k;
		}
	}
	else {
		int k;
		if (a < b) {
			k = b;
			b = a;
			a = k;
		}
		if (b < c) {
			k = c;
			c = b;
			b = k;
		}
		if (a < b) {
			k = b;
			b = a;
			a = k;
		}
	}

}

void task5() {
	int inputarray[] = { 5, 5, 7, 6, 2, 2 ,11 ,11, 5, 4 };
	int arraySize = sizeof(inputarray) / sizeof(int);
	cout << "Input array: ";
	for (int i = 0; i < arraySize; i++) {
		cout << inputarray[i] << " ";
	}
	cout << endl;

	shrink_array(inputarray, arraySize);

	cout << "Output array: ";
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

void task6() {
	int userinput;
	vector<string> database;

	while (true) {
		cout << endl << "Menu:" << endl;
		cout << "1: initialise database" << endl;
		cout << "2: insert" << endl;
		cout << "3: search" << endl;
		cout << "4: delete" << endl;
		cout << "5: print" << endl;
		cout << "6: quit" << endl << endl;

		cout << "Make your choice: ";
		cin >> userinput;
		if (userinput == 1) {
			bool sure;
			cout << "Are you sure? (1/0)" << endl;
			cin >> sure;
			if (sure) {
				database.clear();
				cout << endl << "Database Initialised" << endl;
			}
		}
		if (userinput == 2) {
			while (true) {
				string temp;
				cout << endl << "Give me a name (Q or q to go back)" << endl;
				cin >> temp;
				if (temp == "q" || temp == "Q") {
					break;
				}
				database.push_back(temp);
			}
		}
		if (userinput == 3) {
			cout << endl << "Give search string" << endl;
			string temp;
			cin >> temp;
			for (int i = 0; i < database.size(); i++) {
				if (database[i].substr(0, temp.length()) == temp) {
					cout << endl << database[i] << endl;
				}
			}

		}
		if (userinput == 4) {
			cout << endl << "Delete which name?" << endl;
			string temp;
			cin >> temp;
			for (int i = 0; i < database.size(); i++) {
				if (database[i] == temp) {
					cout << endl << database[i] << " deleted" << endl;
					database.erase(database.begin() + i);
					break;
				}
			}
		}
		if (userinput == 5) {
			cout << endl << "Contents:" << endl;
			for (int i = 0; i < database.size(); i++) {
				cout << database[i] << endl;
			}
		}
		if (userinput == 6) {
			break;
		}
	}
}