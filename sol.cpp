#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
	int n;
	cin >> n;
	if (n <= 15) {
		cout << "Lower " << (n <= 10 ? "Double" : "Single");
	} else {
		cout << "Upper " << (n <= 25 ? "Double" : "Single");
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
