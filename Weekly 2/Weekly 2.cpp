#include <iostream>
#include <string>
using namespace std;

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

int main() {

	for (int i = 1; i <= 100; i++)
	{
		cout << i << " ";
	}
	cout << "\n";
	cout << "\n\nHow far do you want me to count? ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << "\n\nAnd now I'll count down for you:\n\n";
	system("pause");
	for (int j = 100; j > 0; j--)
	{
		cout << j << " ";
	}
	cout << "\n";
	cout << "\n\nWhat number would you like me to count down from? ";
	cin >> m;
	for  (int j = m; j > 0; j--)
	{
		cout << j << " ";
	}
	cout << "\n";
	cout << "And now to the do-while & while-loop\n";
	system("pause");
	
	do {
		cout << k << " ";
		k++;
	} while (k <= 100);

	cout << "\n";
	system("pause");
	 while (kk <= 100)
	{
	cout << kk << " ";
		kk++;
		}
	
	system("pause");
	do
	{
		cout << l << " ";
		l = b * ++a;
	} while (l <=50);

	system("pause");
	while (c <=50) {
	cout << c << " ";
		c = b * ++g;
	}

	system("pause");
	for (int d = b*h; d <= 50; d=b*++h)
	{
		cout << d << " ";
	}

	system("pause");
	while (q <= 100)
	{
		cout << q << " ";
		q++;
	}

	system("pause");
	while (ll <= 50) {
		cout << ll << " ";
		ll = b * ++aa;
	}

	system("pause");
	do
	{
		cout << dd << " ";
		dd = b * ++cc;
	} while (dd <= 50);

	return 0;

}