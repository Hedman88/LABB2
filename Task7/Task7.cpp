#include "lab2lib.h"
#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	cout << "Menu:" << endl << "1: Task 1" << endl << "2: Task 2" << endl << "3: Task 3" << endl;
	cout << "4: Task 4" << endl << "5: Task 5" << endl << "6: Task 6" << endl << "0: Quit" << endl;
	cout << "Which task would you like to run? ";
	int userinput;
	cin >> userinput;
	cout << endl;
	switch (userinput) {
	case 1: 
		task1();
		break;
	case 2: 
		task2();
		break;
	case 3: 
		task3();
		break;
	case 4: 
		task4();
		break;
	case 5: 
		task5();
		break;
	case 6: 
		task6();
		break;
	case 0: 
		break;
	default: cout << "There is no such task" << endl;
	}
}
