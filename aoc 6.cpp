#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	long long prod = 1;
	for (int slope = 1; slope < 8; slope += 2) {
		int count = 0;
		int spot = 0;
		string line;
		getline(cin, line);
		while (line.at(0) == '#' || line.at(0) == '.') {//hit enter and then type in a string not starting with one of these two to end input
			if (line.at(spot) == '#')count++;
			spot = (spot + slope >= line.size()) ? spot + slope - line.size() : spot + slope;
			getline(cin, line);
		}
		cout << count << endl;
		prod *= count;
		cout << prod << endl;
	}
	int count = 0;
	int spot = 0;
	string line;
	getline(cin, line);
	while (line.at(0) == '#' || line.at(0) == '.') {//hit enter and then type in a string not starting with one of these two to end input; for this one, you'll have to do it twice
		if (line.at(spot) == '#')count++;
		spot = (spot + 1 >= line.size()) ? spot + 1 - line.size() : spot + 1;
		cin.ignore(500, '\n');
		getline(cin, line);
	}
	cout << count << endl;
	prod *= count;
	cout << prod << endl;
}
