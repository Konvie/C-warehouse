#include<iostream>
#include"util.h"

int main() {
	using namespace util;
	using namespace std;
	int x;
	double y;
	cin >> x >> y;
	cout << "第一个平方结果为";
	cout << square(x) << endl;
	cout <<"第二个平方结果为";
	cout << square(y) << endl;
	cout << "第一个立方结果为";
	cout << cube(x) << endl;
	cout << " 第二个立方结果为";
	cout << cube(y) << endl;
}