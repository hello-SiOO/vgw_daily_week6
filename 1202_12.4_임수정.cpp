#include<iostream>
#include<vector>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (list[i] > list[i + 1]) {
			Return false;
		}
	}
	Return true;
}
void printResult(bool YesOrYes) {
	if(YesOrYes)
		cout << "this list is sorted" << endl;
	else
		cout << "this list is not sorted" << endl;
}
int main() {
	vector<int> intList(7);
	cout << "Enter the integer list : ";
	for (int i = 0; i < intList.size(); i++)
		cin >> intList[i];
	isSorted(intList, 7) ? printResult(true) : printResult(false);

	vector<double> doubleList(8);
	cout << "Enter the double list : ";
	for (int i = 0; i < doubleList.size(); i++)
		cin >> doubleList[i];
	isSorted(doubleList, 8) ? printResult(true) : printResult(false);

	vector<string> strList(4);
	cout << "Enter the string list : ";
	for (int i = 0; i < strList.size(); i++)
		cin>> strList[i];
	isSorted(strList, 4) ? printResult(true) : printResult(false);

	return 0;
}