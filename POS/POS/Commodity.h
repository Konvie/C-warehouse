#pragma once
#ifndef COMMODITY_H_
#define COMMODITY_H_

using namespace std;

class CCommodity {
public:
	void acquire(long sign,char* no,char* name, double pri, char* menu);
	void buy(char* no);
	void show();
	void total(int num);
	CCommodity();
	~CCommodity();
	
private:
	long m_nld=0;						//�����ݿ���Ψһ��ʶ����Ʒ
	char* m_pszUpc=nullptr;				//ͨ�ò�Ʒ���롣������ϵͳ��ͬ��Ψһ
	char* m_pszName=nullptr;			//��Ʒ����	
	double m_dPrice=0;					//��Ʒ�۸�
	char* m_pszManufacturer=nullptr;	//��Ʒ������
};

#endif
