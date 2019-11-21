#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main() {
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
					database.erase(database.begin()+i);
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