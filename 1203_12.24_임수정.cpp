#include<iostream>
#include<vector>
using namespace std;

double determinant(vector<vector<double> >& a) {
	return a[0][0] * a[1][1] * a[2][2] + a[2][0] * a[0][1] * a[1][2] + a[0][2] * a[1][0] * a[2][1] -
		a[0][2] * a[1][1] * a[2][0] - a[0][0] * a[1][2] * a[2][1] - a[2][2] * a[1][0] * a[0][1];
}
double calculation(double determinant, const vector<vector<double> >& a,const vector<double>& b, char xoryorz) {
	if (xoryorz == 'x')
		return((a[1][1] * a[2][2] - a[1][2] * a[2][1])*b[0] + (a[0][2] * a[2][1] - a[0][1] * a[2][2])*b[1] + (a[0][1] * a[1][2] - a[0][2] * a[1][1])*b[2]) / determinant;
	else if(xoryorz == 'y')
		return((a[1][2] * a[2][0] - a[1][0] * a[2][2])*b[0] + (a[0][0] * a[2][2] - a[0][2] * a[2][0])*b[1] + (a[0][2] * a[1][0] - a[0][0] * a[1][2])*b[2]) / determinant;
	else
		return((a[1][0] * a[2][1] - a[1][1] * a[2][0])*b[0] + (a[0][1] * a[2][0] - a[0][0] * a[2][1])*b[1] + (a[0][0] * a[1][1] - a[0][1] * a[1][0])*b[2]) / determinant;
}
int main() {
	cout << "Enter a11, a12, a13, a21, a22, a23, a31, a32, a33: ";
	vector<vector<double> > a(3);
	for (int i = 0; i < 3; i++)
		a[i] = vector<double>(3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	cout << "Enter b1, b2, b3: ";
	vector<double> b(3);
	for (int i = 0; i < 3; i++)
		cin >> b[i];

	double determinant1 = determinant(a);
	if (determinant1 == 0)
		cout << "No solution" << endl;
	else {
		cout << "this solution is " << calculation(determinant1, a, b, 'x') << " " << calculation(determinant1, a, b, 'y') << " " << calculation(determinant1, a, b, 'z') << endl;
	}
	system("pause");
	return 0;
}