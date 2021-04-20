#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

bool mod(int a, int b) { return (abs(a) < abs(b)); }

int main()
{
	vector<int> arr;
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(begin(arr), end(arr), mod);
	for (auto i : arr)
		cout << i << ' ';
}
