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

		cout << "请输入你想要实现的功能：";
		cin >> num;
		while (num != 0 && num != 1 && num != 2 && num != 3) {
			cout << "选择错误，请重新输入：";
			cin >> num;
		}
		
		switch (num) {
		case 0:
			cout << "成功退出";
			exit(0);
			break;
		case 1:
			cout << "开始加密！" << endl;

			cout << "请输入明文（不超过32个字符）：" << endl;
			cin >> plain;

			CCaesar::Encrypt(plain);
			cout << "加密结果如下:" << endl;
			for (int i = 0; i < (int)strlen(plain); i++) {
				cout << plain[i];
			}
			cout << endl;
			break;
		case 2:
			cout << "开始解密！" << endl;
			cout << "请输入密文（不超过32个字符）：" << endl;
			cin >> cipher;

			CCaesar::Decrypt(cipher);
			cout << "解密结果如下：" << endl;
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