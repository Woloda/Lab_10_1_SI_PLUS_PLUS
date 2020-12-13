#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

bool perevirka(char* fname);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char fname[51];
	cout << "Введіть назву фізичного файлу: ";
	cin >> fname;
	cout << endl;

	bool b = perevirka(fname);

	if (b)
		cout << "Так є серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;
	else
		cout << "Ні не має серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;

	return 0;
}

bool perevirka(char* fname)
{
	ifstream perev_f(fname);

	string lit_r;

	while (getline(perev_f, lit_r))
	{
		cout << "Літерний рядок зчитаний з фізичного файлу: ";
		cout << lit_r << endl << endl;

		for (int i = 0; i < lit_r.length(); i++)
		{
			if ((lit_r[i] == 'Q' && lit_r[i + 1] == 'S') || (lit_r[i] == 'S' && lit_r[i + 1] == 'Q'))
				return true;
		}
	}
	return false;
}