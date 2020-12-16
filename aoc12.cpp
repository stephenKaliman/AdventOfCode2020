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
	int letters = 1;
	int grp = 0;
	getline(cin, tmp);
	int members = 1;
	while (isalpha(tmp.at(0))) {
		group += tmp;
		getline(cin, tmp);
		if (tmp == "") {
			sort(group.begin(), group.end());
			for (int i = 1; i < group.size(); i++) {
				if (group.at(i) == group.at(i - 1)) letters++;
				else {
					if (letters == members) grp++;
					letters = 1;
				}
			}
			if (letters == members) grp += 1;
			letters = 1;
			sum += grp;
			group = "";
			grp = 0;
			getline(cin, tmp);
			members = 0;
		}
		members++;
	}
	cout << sum << endl;
}
