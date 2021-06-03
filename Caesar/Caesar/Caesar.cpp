#include"Caesar.h"
#include <iomanip>

//������ʽ����ģʽ
CCaesar* CCaesar::instance = new CCaesar();
CCaesar* CCaesar::GetInstance() {
	return instance;	//ֱ�ӷ���instance
}

char CCaesar::code[LEN] = { '0' };

void CCaesar::menu() {
	cout << "************************************" << endl;
	cout << setw(8) << "��������" << endl;
	cout << endl;
	cout << "�����ܳ���������ڴ�дӢ�ĺ�СдӢ�ļ�, ; ' �� �����ַ�����֧��" << endl;
	cout << setw(4) <<"1.�����ַ�" << setw(4) << endl;
	cout << setw(4)<<"2.�����ַ�" << setw(4) << endl;
	cout << setw(4)<<"3.��ʾ�����"<< setw(4) << endl;
	cout << setw(4)<<"0.�˳���������"<< setw(4) << endl;
	cout << endl;
	cout << "************************************" << endl;
}

//��ʼ����������Գ�ʼ��Ϊ�Լ���Ҫ���κ��ַ�
void CCaesar::initCode() {
	//��дӢ����ĸ
	for (int i = 0; i < 26; i++) {
		code[i] = char(65 + i);
	}
	//СдӢ����ĸ
	for (int i = 0; i < 26; i++) {
		code[i + 26] = char(97 + i);
	}
	//���š��ֺš������š�˫����
	code[LEN - 1] = char(44);
	code[LEN - 2] = char(59);
	code[LEN - 3] = char(39);
	code[LEN - 4] = char(34);
}

void CCaesar::printCode() {
	for (int i = 0; i < LEN; i++) {
		cout << i << "---->" << code[i] << endl;
	}
}

char* CCaesar::Encrypt(/*const*/ char* string1) {
	for (int i = 0; i < (int)strlen(string1); i++) {
		for (int j = 0; i < LEN; j++) {
			if (string1[i] == code[j]) {
				int temp = (j + KEY) % LEN;
				string1[i] = code[temp];
				break;
			}
		}
	}
	return string1;
}

char* CCaesar::Decrypt(/*const*/ char* string2) {
	for (int i = 0; i < (int)strlen(string2); i++) {
		for (int j = 0; j < LEN; j++) {
			if (string2[i] == code[j]) {
				int temp = (j + LEN - KEY) % LEN;
				break;
			}
		}
	}
	return string2;
}

void CCaesar::deleteCaesar() {
	delete instance;
}