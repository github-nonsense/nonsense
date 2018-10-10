#include <iostream>
#include <cmath>

using namespace std;

int a()
{
	return 0;
}

void parse_line(string& s)
{
	int id = 0;
	int shift = 0;
	for (int i = 0; i < s.length(); i++) {
		if (!isdigit(s[i])) {
			id = 0;
			shift = 0;
			continue;
		}

		id += pow(10, shift) * (s[i] - '0');
	}
}

int main()
{
	int n;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++) {
		getline(cin, str);
	}
	return 0;
}
