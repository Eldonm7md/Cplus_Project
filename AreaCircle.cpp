
#include <iostream>
#include <string>
using namespace std;

float ReadRadious() {
	float R;
	cout << "Please enter radious R?" << endl;
	cin >> R;
	return R;
}
float CircleArea(float R) {
	const float PI = 3.14;
	float Area = pow(R, 2) * PI;
	return Area;
}
void PrintResult(float Area) {
	cout << " The Area of Circle is : " << Area;
}

int main() {
	PrintResult(CircleArea(ReadRadious()));
}