#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main() {
		int count = 0;
		int spot = 0;
		string line;
		getline(cin, line);
		while (line.at(0) == '#' || line.at(0) == '.') {//hit enter and then type in a string not starting with one of these two to end input
			if (line.at(spot) == '#')count++;
			spot = (spot + 3 >= line.size()) ? spot + 3 - line.size() : spot + 3;
			getline(cin, line);
		}
		cout << count << endl;
}
