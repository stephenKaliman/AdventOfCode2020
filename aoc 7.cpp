#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int count = 0;
	string line;
	getline(cin, line);
	string tmp;
	while (!isdigit(line.at(0))) {// note that due to the for loops, to terminate input, add another newline and then type a random digit and hit enter again
		getline(cin, tmp);
		while (tmp != "") {
			line += " " + tmp;
			getline(cin, tmp);
		}
		if (line.find("hcl:") != string::npos &&
			line.find("hgt:") != string::npos &&
			line.find("eyr:") != string::npos &&
			line.find("iyr:") != string::npos &&
			line.find("pid:") != string::npos &&
			line.find("byr:") != string::npos &&
			line.find("ecl:") != string::npos)
			count++;
		getline(cin, line);
	}
	cout << count << endl;
}
