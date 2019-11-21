#include "iostream";

using namespace std;

bool is_sorted(int a[]);
int numbersInput;

int main() {

	cout << "How many numbers do you want to put in your array?" << endl;
	cin >> numbersInput;
	int *numberItems = new int[numbersInput];
	for (int i = 0; i < numbersInput; i++) {
		cout << "Give me number nr: " << i+1 << endl;
		cin >> numberItems[i];
	}
	cout << "Sorted? " << is_sorted(numberItems) << endl;
	delete numberItems;
	system("pause");
	return 0;
}

bool is_sorted(int a[]) {
	for (int i = 0; i < numbersInput - 1; i++) {
		if (a[i] < a[i + 1]) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}