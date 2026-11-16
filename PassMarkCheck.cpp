/*
#include <iostream>
using namespace std;

enum enPassFail { Pass =1,Fail=2};

int ReadMark() {
	int Mark;
	cout << " enter your mark?" << endl;
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark) {
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark) {
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Passed \a" << endl;
	else
		cout << "\n You Fail" << endl;
}

int main() {
	PrintResult(ReadMark());
}
*/