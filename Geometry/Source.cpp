
#include <iostream>
using namespace std;

//#define TRINGLE_1
//#define TRINGLE_2
//#define TRINGLE_3
//#define TRINGLE_4
//#define TRINGLE_5
#define TRINGLE_6

void main() {
	setlocale(LC_ALL, "Russian"); // Установлена русская раскладка
	int n,m;
	cout << "Ввендите фигуру"; cin >> n;
#ifdef TRINGLE_1
	m = 0;
	for (int i = 0; i < n; i++)
	{
		m++;
		for (int j = 0; j < m; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
#endif // TRINGLE_1

#ifdef TRINGLE_2
	m = n+1;
	for (int i = 0; i < n; i++)
	{
		m--;
		for (int j = 0; j < m; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
#endif // TRINGLE_2

#ifdef TRINGLE_3
	
	for (int i = 0; i < n; i++)
	{
		for (int pr = 0; pr < i; pr++)
		{
			cout << " ";
		}

		for (int j = i; j < n; j++)
		{
			cout << "*";
		}


		cout << endl;
	}

#endif // TRINGLE_3

#ifdef TRINGLE_4

	for (int i = 0; i <= n; i++)
	{
		
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		
		

		cout << endl;
	}

#endif // TRINGLE_4

#ifdef TRINGLE_5
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/" ;
		
		for (int pr = 0; pr < i; pr++)
		{
			cout << "  ";
			
		}
		cout << "\\";
		cout << "\n";


	}

	for (int i = 1; i < n+1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		
		cout << "\\";

		for (int pr1 = i; pr1 < n; pr1++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << "\n";
	}

#endif // TRINGLE_5

#ifdef TRINGLE_6
	bool li;
	li = true;

	for (int i = 0; i < n; i++)
	{
		if (li)
		{
			for (int j = 0; j < n; j = j + 2)
			{
				cout << "+ ";
				
				if (n % 2 == 0)
				{
					cout << "- ";
				}

				if (n % 2 != 0 and n - 2 > j)
				{
					cout << "- ";
				}

			}
			li = false;
		}
		else
		{
			for (int j = 0; j < n; j = j + 2)
			{
				cout << "- ";
				if (n % 2 == 0)
				{
					cout << "+ ";
				}

				if (n % 2 != 0 and n - 2 > j)
				{
					cout << "+ ";
				}

			}
			li = true;
		}
		

		
		cout << "\n";
	}
	
#endif // TRINGLE_6



}


