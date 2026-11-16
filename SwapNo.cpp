/**
#include <iostream>
using namespace std;

void ReadNumber(int &Num1, int& Num2) {
	cout << " enter the first No : " << endl;
	cin >> Num1;
	cout << " enter the Secoend No : " << endl;
	cin >> Num2;
}
void swap(int& Num1, int& Num2) {
	int a, b;
	a = Num1, b = Num2;
	Num1 = b, Num2 = a;
}
void PrintNumbers(int Num1, int Num2) {
	cout << " the Num1 is :" << Num1 << endl;
	cout << " the Num2 is :" << Num2 << endl;
}
int main() {
	int Num1, Num2;
	ReadNumber(Num1, Num2);
	PrintNumbers(Num1, Num2);
	swap(Num1, Num2);
	PrintNumbers(Num1, Num2);

}
*/