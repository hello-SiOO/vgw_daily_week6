#include <iostream>
#include <vector>
using namespace std;
const int SIZE = 80;
bool isConsecutiveFour(const vector<int>& values);
int main() {
	int size;
	cout << "Enter the number of values: ";
	cin >> size;
	cout << "Enter the values : ";
	vector<int> values(size);
	for (int i = 0; i < size; i++)
		cin >> values[i];
	if (isConsecutiveFour(values))
		cout << "The list has consecutive fours" << endl;
	else
		cout << "The list has no consecutive fours" << endl;

	return 0;
}
bool isConsecutiveFour(const vector<int>& values) {
	bool isconsecutiveFour = false;
	int cnt = 1;
	for (int i = 0; i < values.size()-1; i++) {
		if (values[i] == values[i + 1])
			cnt++;
		else
			cnt = 1;
		if (cnt == 4) {
			isconsecutiveFour = true;
			break;
		}
	}
	return isconsecutiveFour;
}