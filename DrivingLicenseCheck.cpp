/**
#include <iostream>
#include <string>dd
using namespace std;

struct stInfo {
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfo ReadInfo()
{
	stInfo Info;
	cout << "Please enter Age?\n";
	cin >> Info.Age;
	cout << "Do you have a driving license? (1 for Yes, 0 for No)\n";
	cin >> Info.HasDrivingLicense;
	cout << " Does you have Recommendation ?\n";
	cin >> Info.HasRecommendation;
	return Info;
}

bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation) {
		return true;
	}
	else
	{
		return (Info.Age > 21 && Info.HasDrivingLicense);
	} 
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired" << endl;
	else
		cout << "\n Reject" << endl;
}

int main()
{
	PrintResult(ReadInfo());
	return 0;
}
*/