#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int sum = 0;
	string tmp;
	string group = "";
	int grp = 1;
	getline(cin, tmp);
	while (isalpha(tmp.at(0))) {
		group += tmp;
		getline(cin, tmp);
		if (tmp == "") {
			sort(group.begin(), group.end());
			for (int i = 1; i < group.size(); i++) {
				if (group.at(i) != group.at(i - 1)) grp++;
			}
			sum += grp;
			group = "";
			grp = 1;
			getline(cin, tmp);
		}
	}
	cout << sum << endl;
}
