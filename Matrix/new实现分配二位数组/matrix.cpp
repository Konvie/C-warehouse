#include<iostream>
using namespace std;

void main()
{
	int i, j;

	int(*p)[5] = new int[3][5];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			p[i][j] = (i+1) * (j+1);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << p[i][j];
			cout << " ";
		}
		cout << endl;
	}

	delete[] p;
}