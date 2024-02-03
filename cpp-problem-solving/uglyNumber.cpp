#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n) {

	if (n <= 0) return false;

	while (n % 5 == 0) {
		n = n / 5;
	}

	while (n % 3 == 0) {
		n = n / 3;
	}

	while (n % 2 == 0) {
		n = n / 2;
	}

	return (n == 1);
}

int main()
{
	int n;
	cin >> n;

	bool result = isUgly(n);

	cout << result << endl;

	return 0;
}