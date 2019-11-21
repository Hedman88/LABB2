#include <iostream>

using namespace std;

bool is_palindrome(char a[]);
int wordSize;

int main() {
	cout << "How many letters does your word consist of?" << endl;
	cin >> wordSize;
	wordSize++;
	char *word = new char[wordSize];
	cout << "Give me your word" << endl;
	cin >> word;
	cout << "Palindrome? " << is_palindrome(word) << endl;
	delete word;

	system("pause");
	return 0;
}

bool is_palindrome(char a[]) {
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