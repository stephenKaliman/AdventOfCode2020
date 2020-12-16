#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
	bool taken[1024] = { 0 };
	char c;
	cin >> c;
	while (isalpha(c)) {
		int score = 0;
		for (int i = 0; i < 10; i++)
		{
			score *= 2;
			if (c == 'B' || c == 'R') score += 1;
			cin >> c;
		}
		taken[score]=true;
	}
	for (int i = 1; i < 1023; i++)
	{
		if (!taken[i] && taken[i - 1] && taken[i + 1])
		{
			cout << i << endl;
			break;
		}
	}
}
