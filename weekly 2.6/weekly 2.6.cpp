#include <iostream>
#include <string>
using namespace std;

int main() {
	char grade;
	cout << "What grade do you want in Programming 1?\n";
	cin >> grade;
	switch (grade)
	{
	case 'A':
	case 'a':
		cout << "Outstanding\n";
		break;
	case 'B':
	case 'b':
		cout << "Very good\n";
		break;
	case 'C':
	case 'c':
		cout << "Good\n";
		break;
	case 'D':
	case 'd':
		cout << "Some flaws\n";
		break;
	case 'E':
	case 'e':
		cout << "Not very good\n";
		break;
	case 'F':
	case 'f':
		cout << "Fail\n";
		break;
	default:
		cout << "Thats not a grade!";
		break;
	}





	return 0;
}