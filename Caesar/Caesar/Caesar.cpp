#include"Caesar.h"
#include <iomanip>

//饥饿方式单例模式
CCaesar* CCaesar::instance = new CCaesar();
CCaesar* CCaesar::GetInstance() {
	return instance;	//直接返回instance
}

char CCaesar::code[LEN] = { '0' };

void CCaesar::menu() {
	cout << "************************************" << endl;
	cout << setw(8) << "凯撒加密" << endl;
	cout << endl;
	cout << "本加密程序仅适用于大写英文和小写英文及, ; ' “ 其他字符均不支持" << endl;
	cout << setw(4) <<"1.加密字符" << setw(4) << endl;
	cout << setw(4)<<"2.解密字符" << setw(4) << endl;
	cout << setw(4)<<"3.显示密码表"<< setw(4) << endl;
	cout << setw(4)<<"0.退出凯撒加密"<< setw(4) << endl;
	cout << endl;
	cout << "************************************" << endl;
}

//初始化密码表，可以初始化为自己需要的任何字符
void CCaesar::initCode() {
	//大写英文字母
	for (int i = 0; i < 26; i++) {
		code[i] = char(65 + i);
	}
	//小写英文字母
	for (int i = 0; i < 26; i++) {
		code[i + 26] = char(97 + i);
	}
	//逗号、分号、单引号、双引号
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