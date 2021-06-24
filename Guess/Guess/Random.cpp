#include"Random.h"
#include<cstdlib>
#include<ctime>

//nBound表示生成随机数的上界，默认值为10，即所生成的整数在[0,10)中
//nLimit表示允许用户猜测的最大次数，默认值为10
CRandom::CRandom(int nBound,int nLimit) {
	srand((unsigned int)time(NULL));	//用系统时间作为随机数生成器的种子
	m_nBound = nBound;
	m_nLimit = nLimit;
}

//返回判断结果，递增用户已猜测次数
//对用户输入的整数进行判断，并将判断结果以枚举Result返回
Result CRandom::Judge(int nValue) {
	if (m_nCount >= m_nLimit) {
		//result = Result::EXCEED;
		//result = EXCEED;
		return EXCEED;
	}
	m_nCount++;
	while (m_nCount < m_nLimit) {	//这里不用while会出现不包含所有情况的现象
		if (m_nValue == nValue) {
		//return Result::EQUAL;
		//result = EQUAL;
		return EQUAL;
	}
		else if (m_nValue > nValue) {
		//result = Result::LESS;
		//result = LESS;
		return LESS;
	}
		else if (m_nValue < nValue) {
		//result = Result::GREAT;
		//result = GREAT;
		return GREAT;
	}
}	
	//return result;
}

void CRandom::Start() {
	//int rand(void)⽣成下⼀个随机数，范围[0, RAND_MAX)，注意不要超过构造函数中所给定的上界
	m_nValue = rand() % m_nBound;	//获取随机数
	m_nCount = 0;
}

int CRandom::getValue() {
	return m_nValue;
}

int CRandom::getremCount() {
	return m_nLimit - m_nCount;
}

