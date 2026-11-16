/**
#include <iostream>
using namespace std;
enum enPassFail { Pass=1,Fail = 0};

void ReadMark(int &Mark1, int &Mark2, int &Mark3) {
	cout << "Enter the 3 marks :" << endl;
	cin >> Mark1;
	cout << system("color 5f");
	cin >> Mark2;
	cout << system("color 4");
	cin >> Mark3;
	cout << system("color 3f");

}
int Sum3marks(int Mark1, int Mark2, int Mark3) {
	return Mark1 + Mark2 + Mark3;
}
float CalculaterAverge(int Mark1, int Mark2, int Mark3) {
	return (float)Sum3marks(Mark1, Mark2, Mark3) / 3;
}
enPassFail CheckAverage(float Average ){
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintResults(float Average) {
	cout << "\n Your Average is: " << Average << endl;
}

int main() {
	int Mark1, Mark2, Mark3;
	ReadMark(Mark1, Mark2, Mark3);
	PrintResults(CalculaterAverge(Mark1, Mark2, Mark3));
	return 0;
}
*/