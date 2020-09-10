#include <iostream>
#include <string>
using namespace std;

int z;
int n;
int m;
int kk = 1;
int k = 1;
int l = 5;
int a = 1;
int b = 5;
int c = 5;
int d = 5;
int e = 5;
int f = 5;
int g = 1;
int h = 1;
int q = 1;
int aa = 1;
int cc = 1;
int ll = 5;
int dd = 5;

int main(){
	int option;

	do
	{
		cout << "Hello, welcome user!\nPlease select one of the options below by typing 0-10.\n\n";
		cout << "0: While-loop 1-100 (This option only works once)" << endl;
		cout << "1: While-loop 1 to X" << endl;
		cout << "2: For-loop 1-100 (This option only works once)" << endl;
		cout << "3: For-loop 1 to X" << endl;
		cout << "4: For-loop 100-1 (This option only works once)" << endl;
		cout << "5: For-loop X to 1" << endl;
		cout << "6: While-loop 5-50 in steps of 5 (This option only works once)" << endl;
		cout << "7: For-loop 5-50 in steps of 5 (This option only works once)" << endl;
		cout << "8: Do-While 5-50 in steps of 5 (This option only works once)" << endl;
		cout << "9: Programming grade" << endl;
		cout << "10: Exit program" << endl;
		cin >> option;
		system("cls");
		switch (option)
		{
		case 0:
			cout << "Hello, let me count 1-100 for you!\n";
			system("pause");
			while (kk <= 100)
			{
				cout << kk << " ";
				kk++;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 1:
			cout << "Hello, how far would you like me to count?\n";
				cin >> z;
			while (kk <= z)
			{
				cout << kk << " ";
				kk++;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 2:
			cout << "Hello, let me count 1-100 for you!\n";
			system("pause");
			for (int i = 1; i <= 100; i++)
			{
				cout << i << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 3:
			cout << "Hello, how far would you like me to count?\n";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{
				cout << i << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 4:
			cout << "Hello, let me count down from 100 for you!\n";
			system("pause");
			for (int j = 100; j > 0; j--)
			{
				cout << j << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 5:
			cout << "Hello, what number would you like me to count down from?\n";
			cin >> m;
			for (int j = m; j > 0; j--)
			{
				cout << j << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 6:
			cout << "Hello, let me count 5-50 in steps of 5 for you!\n";
			system("pause");
			while (c <= 50) {
				cout << c << " ";
				c = b * ++g;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 7:
			cout << "Hello, let me count 5-50 in steps of 5 for you!\n";
			system("pause");
			for (int d = b * h; d <= 50; d = b * ++h)
			{
				cout << d << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 8:
			cout << "Hello, let me count 5-50 in steps of 5 for you!\n";
			system("pause");
			do
			{
				cout << dd << " ";
				dd = b * ++cc;
			} while (dd <= 50);
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 9:
			char grade;
			cout << "Hello user.\nWhat grade do you want in Programming 1?\n";
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
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		default:
			cout << "Thanks for using the program!\n\nGood bye!";
			break;
		}


		cout << "\n";
		system("pause");
		system("cls");
	} while (option < 10 && option >= 0);







	return 0;
}