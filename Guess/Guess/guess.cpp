#include<iostream>
#include"Random.h"

using namespace std;

const int nBound = 10;
const int nLimit = 10;
int tag = 0;

void Guess(CRandom& hRandom) {
	//提示用户输入一个整数
	int num;
	/*while (m_nCount <= m_nLimit) {}*/
	cout << "请输入一个整数:" << endl;
	cin >> num;
	//调用Judge()对用户所输入的整数进行判断
	int result=hRandom.Judge(num);
	//打印结果
	switch (result) {
	case CRandom::Result::EQUAL: {
		cout << "congratulation!" << endl;
		tag = 1;
		break;} 
	case CRandom::Result::LESS:cout << "Sorry，too small，remaining："<< hRandom.getremCount() << endl; break;
	case CRandom::Result::GREAT:cout << "Sorry，too large，remaining："<< hRandom.getremCount() << endl; break;
	case CRandom::Result::EXCEED:cout << "Sorry，exhausted，value："<< hRandom.getValue() << endl; break;
	default:cout << "ERROR!" << endl; break;
	}
}

int main() {
	CRandom user1(nBound, nLimit);
	char answer;
	user1.Start();			//游戏开始
	while (tag==0&&user1.getremCount()>0) {
		Guess(user1);
	}
	tag = 0;
	while (1) {
		cout << "是否继续？(yes or no)" << endl;
		cin >> answer;
		while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N') {
		cout << "您输入的选择不正确，请重新输入。" << endl;
		cin >> answer;
		}
		if (answer == 'y' || answer == 'Y') {
			user1.Start();
			while (tag == 0 && user1.getremCount() > 0) {
				Guess(user1);
			}
			tag = 0;
		}
		else if (answer == 'n' || answer == 'N') {
			return 0;
		}
	}
}