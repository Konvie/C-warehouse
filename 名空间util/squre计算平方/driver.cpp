#include<iostream>
#include"util.h"

int main() {
	using namespace util;
	using namespace std;
	int x;
	double y;
	cin >> x >> y;
	cout << "��һ��ƽ�����Ϊ";
	cout << square(x) << endl;
	cout <<"�ڶ���ƽ�����Ϊ";
	cout << square(y) << endl;
	cout << "��һ���������Ϊ";
	cout << cube(x) << endl;
	cout << " �ڶ����������Ϊ";
	cout << cube(y) << endl;
}