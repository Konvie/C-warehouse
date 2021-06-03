#include<iostream>
#include"Caesar.h"
#include <iomanip>

using namespace std;

int main() {
	CCaesar* caesar = CCaesar::GetInstance();
	char plain[WID];
	char cipher[WID];
	CCaesar::initCode();

	int num;
	while (1) {
		CCaesar::menu();
		cout << endl;

		cout << "����������Ҫʵ�ֵĹ��ܣ�";
		cin >> num;
		while (num != 0 && num != 1 && num != 2 && num != 3) {
			cout << "ѡ��������������룺";
			cin >> num;
		}
		
		switch (num) {
		case 0:
			cout << "�ɹ��˳�";
			exit(0);
			break;
		case 1:
			cout << "��ʼ���ܣ�" << endl;

			cout << "���������ģ�������32���ַ�����" << endl;
			cin >> plain;

			CCaesar::Encrypt(plain);
			cout << "���ܽ������:" << endl;
			for (int i = 0; i < (int)strlen(plain); i++) {
				cout << plain[i];
			}
			cout << endl;
			break;
		case 2:
			cout << "��ʼ���ܣ�" << endl;
			cout << "���������ģ�������32���ַ�����" << endl;
			cin >> cipher;

			CCaesar::Decrypt(cipher);
			cout << "���ܽ�����£�" << endl;
			for (int i = 0; i < (int)strlen(cipher); i++) {
				cout << cipher[i];
			}
			cout << endl;
			break;
		case 3:
			CCaesar::printCode();
			break;
		default:break;
		}
	}
	CCaesar::deleteCaesar();
}