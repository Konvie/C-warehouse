#include<iostream>
#include"Commodity.h"

using namespace std;

int main() {
	//�û������Ʒ��upc
	cout << "������һ����Ʒ����Ϣ��" << endl;
	char upc[4] = {};	//ע�⣺����涨��upc�ĸ�ʽΪvxx��Ҳ���Ǿ��о����Ե�ѡ��
	cin >> upc;
	//������
	CCommodity commodity1;
	CCommodity commodity2;
	char v01[] = "v01";
	char v02[] = "v02";
	char name1[] = "����";
	char name2[] = "ʱ��";
	char facture1[] = "gog";
	char facture2[] = "vive";
	//�����������ำֵ
	commodity1.acquire(10, v01, name1, 3799, facture1);
	commodity2.acquire(20, v02, name2, 1999, facture2);
	
	//����upc��ʾ���ơ����ۡ������̵���Ϣ
	if (strcmp(upc, v01) == 0) {	//����strcmp��������ıȼۣ����û�����������v01��������ƥ��
		commodity1.show();			//���v01����Ϣ
		commodity1.total(0);		//���v01���ܼ�
	}
	else if (strcmp(upc, v02) == 0) {
		commodity2.show();			//ͬ��
		commodity2.total(0);
	}
}