#include<iostream>
#include"Commodity.h"

void CCommodity::acquire(long sign,char* no,char* name,double pri,char* menu) {
	m_nld =sign ;
	m_pszUpc = no;
	m_pszName = name;
	m_dPrice = pri;
	m_pszManufacturer = menu;
}

void CCommodity::buy(char* no) {
	cout << "��������Ҫ�������Ʒ�Ĳ�Ʒ���루UPC)" << endl;
	cin >> no;
}

void CCommodity::show() {
	cout << m_nld<< endl;
	cout << m_pszUpc << endl;
	cout << m_pszName << endl;
	cout << m_dPrice << endl;
	cout << m_pszManufacturer << endl;
}

void CCommodity::total(int num) {
	cout << "��������Ҫ�����������" << endl;
	cin >> num;
	double total;
	total = num * m_dPrice;
	cout << total << endl;
}
CCommodity::CCommodity() {
}

CCommodity::~CCommodity() {

}