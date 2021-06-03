#include<iostream>
#include"Commodity.h"

using namespace std;

int main() {
	//用户输入产品的upc
	cout << "请输入一个商品的信息：" << endl;
	char upc[4] = {};	//注意：这里规定了upc的格式为vxx，也就是具有局限性的选择
	cin >> upc;
	//创建类
	CCommodity commodity1;
	CCommodity commodity2;
	char v01[] = "v01";
	char v02[] = "v02";
	char name1[] = "彗星";
	char name2[] = "时捷";
	char facture1[] = "gog";
	char facture2[] = "vive";
	//给所创建的类赋值
	commodity1.acquire(10, v01, name1, 3799, facture1);
	commodity2.acquire(20, v02, name2, 1999, facture2);
	
	//根据upc显示名称、单价、制造商等信息
	if (strcmp(upc, v01) == 0) {	//利用strcmp进行数组的比价，若用户输入数组与v01的内容相匹配
		commodity1.show();			//输出v01的信息
		commodity1.total(0);		//输出v01的总价
	}
	else if (strcmp(upc, v02) == 0) {
		commodity2.show();			//同上
		commodity2.total(0);
	}
}