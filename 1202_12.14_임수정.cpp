#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	int rowSize;
	cout << "Enter a number of points : ";
	cin >> rowSize;
	vector<vector<double> >points(rowSize);

	for (int i = 0; i < rowSize; i++)
		points[i] = vector<double>(2);
	cout << "Enter the " << rowSize << " points (x, y) : " << endl;
	for (int i = 0; i < rowSize; i++) {
		cin >> points[i][0] >> points[i][1];
	}

	double min = 0;
	int p1 = 0;
	int p2 = 1;
	for (int i = 0; i < rowSize - 1; i++) {
		for (int j = i + 1; j < rowSize; j++) {
			double distance = sqrt(pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2));
			if (distance < min) {
				min = distance;
				p1 = i;
				p2 = j;
			}
		}
	}

	cout << "the closest points are ( " << points[p1][0] << ", " << points[p1][1] << " ) and ( " << points[p2][0] << ", " << points[p2][1] << " ) " << endl;
	system("pause");
	return 0;
}