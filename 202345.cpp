#include <iostream>

void clock(int hours, int minutes)
{
	using std::cout;
	using std::endl;
	cout << "Time:" << hours << ":" << minutes << endl;
}
int main()
{
	using std::cout;
	using std::cin;
	int hours = 0;
	int minutes = 0;
	cout << "Enter the number of hours:";
	cin >> hours;
	cout << "Enter the number of minutes:";
	cin >> minutes;
	clock(hours, minutes);
	return 0;
}