#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (1 == n % 2) {
		cout << "Either";
		return 0;
	}

	if (0 == n % 4) {
		cout << "Even";
		return 0;
	}

	cout << "Odd";
	return 0;
}