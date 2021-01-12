#include <iostream>
#include <iomanip>
#include <time.h>
#include <windows.h>

using namespace std;

void input(int* a, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void indexMax(int* a, const int size)
{
	bool flag = false;
	int max, imax;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] % 2) == 0)
		{
			if (!flag)
			{
				flag = true;
				max = a[i];
				imax = i;
			}
			else if (max < a[i])
			{
				max = a[i];
				imax = i;
			}

		}
	}

	if (!flag)
	{
		cout << "�� ����� �� ����. " << endl;
	}
	else
	{
		cout << "������ ���������� ������� �������� ������: " << imax << endl;
	}

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	int n = 0;
	cout << "������ ����� ������: "; cin >> n;
	int* a = new int[n];

	input(a, n);
	Print(a, n);
	indexMax(a, n);

	delete[] a;

	return 0;
}