#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int max = 0;
	char c;
	cin >> c;
	while (isalpha(c)) {
		int score = 0;
		int score1 = 0;
		int score2 = 0;
		for (int i = 0; i < 7; i++)
		{
			score1 *= 2;
			if (c == 'B') score1 += 1;
			cin >> c;
		}
		for (int i = 0; i < 3; i++)
		{
			score2 *= 2;
			if (c == 'R')score2 += 1;
			cin >> c;
		}
		score = 8 * score1 + score2;
		if (score > max) max = score;
	}
	cout << max << endl;
}
