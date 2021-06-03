#include<iostream>
using namespace std;

template <class T>
 T cube(T a)
{
	int result = 0;
	result = a * a * a;
	return result;
}

int main() {
	int x;
	double y;
	cin >> x >> y;
	cout <<cube(x)<<" "<<cube(y);
}
