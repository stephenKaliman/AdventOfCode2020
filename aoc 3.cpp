#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int count = 0;
	int a;
	for (int i = 0; cin>>a; i++) {//enter a non-integer (and non-space) something and then hit enter when you are done with input
		int b;
		cin >> b;
		b = -b;
		char c;
		cin >> c;
		string password;
		getline(cin, password);
		password = password.substr(2, password.size() - 2);
		int appearances = 0;
		for (int i = 0; i < password.size(); i++) {
			if (password.at(i) == c) appearances++;
		}
		if (a <= appearances && appearances <= b) count++;
	}
	cout << count << endl;
}
