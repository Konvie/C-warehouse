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
	long m_nld=0;						//在数据库中唯一标识该商品
	char* m_pszUpc=nullptr;				//通用产品代码。在整个系统中同样唯一
	char* m_pszName=nullptr;			//商品名称	
	double m_dPrice=0;					//商品价格
	char* m_pszManufacturer=nullptr;	//商品制造商
};

#endif
